SRC_DIR := src
TEST_DIR := tests
BIN_DIR := bin
CHECK404_DIR := check404
CC := gcc

PROBLEM_SET := sub1

CPPFLAGS := -Iinclude -MMD -MP
CFLAGS   := -Wall
DLL_FLAGS := -fPIC -shared
LDFLAGS  := -Llib
LDLIBS   := -lm

.PHONY: all clean install test_files

all: $(PROBLEM_SET)

./dll:
	@mkdir -p ./dll

install:
	@cd ./$(TEST_DIR)/$(CHECK404_DIR); $(MAKE) install 

test_files: all
	@$(CC) ./tests/test_zenit.c ./dll/sub1.so -Wl,-rpath=./dll/ -o ./tests/test_zenit.out
	@$(CC) ./tests/test_decripta.c ./dll/sub1.so -Wl,-rpath=./dll/ -o ./tests/test_decripta.out
	@$(CC) ./tests/test_linha.c ./dll/sub1.so -Wl,-rpath=./dll/ -o ./tests/test_linha.out
	@$(CC) ./tests/test_arquivo.c ./dll/sub1.so -Wl,-rpath=./dll/ -o ./tests/test_arquivo.out

test: test_files
	python ./$(TEST_DIR)/$(CHECK404_DIR)/check404.py
	@./bin/sub1.out
	@cat ./solucao.txt
	@$(MAKE) -s clean

$(PROBLEM_SET): $(BIN_DIR) ./dll
	@$(CC) $(SRC_DIR)/$(@).c $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $(BIN_DIR)/$@.out
	@$(CC) $(SRC_DIR)/$(@).c $(CFLAGS) $(DLL_FLAGS) $(LDFLAGS) $(LDLIBS) -o ./dll/$@.so

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

run: $(filter-out run, $(MAKECMDGOALS))
	@for i in $^; do ./$(BIN_DIR)/$$i.out; done

clean:
	@$(RM) -rf $(BIN_DIR)
	@$(RM) ./tests/*.out
	@$(RM) ./tests/solucao.txt
	@$(RM) solucao.txt
	@$(RM) -rf ./dll
