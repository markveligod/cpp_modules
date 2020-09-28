NAME = replace
FLAGS = -Wall -Wextra -Werror
SRC = ./main.cpp
TESTS = ./tests/1.replace ./tests/2.replace ./tests/3.replace
HDRS = ./main.hpp
OBJ=$(SRC:.cpp=.o)

#colors
RED=\033[1;31m
GREEN=\033[1;32m
YELLOW=\033[1;33m
CYAN=\033[1;36m
RESET=\033[0m

%.o:%.cpp
	@clang++ -o $@ -c $< $(FLAGS)
	@echo "[$(GREEN)OK$(RESET)]$(YELLOW) Compiling $<$(RESET)"

$(NAME): $(OBJ) $(HDRS)
	@clang++ -o $(NAME) $(OBJ) $(FLAGS)
	@echo "[$(GREEN)Success$(RESET)]$(GREEN) Successfully compiled $(NAME) project.$(RESET)"
	@echo ""
	@echo "$(CYAN)      /|/|"
	@echo "     ( @ @)"
	@echo "      ) ^ $(RESET)   CPP Module 01 (project 2020) $(CYAN)"
	@echo "     / |||       $(RESET) by ckakuna$(CYAN)"
	@echo "    / )|||_"
	@echo "   (_______)$(RESET)"
	@echo ""
	@echo "$(GREEN)[Exercise 07 : Sed is for losers]:$(RESET)"
	@echo "$(YELLOW)Сделайте программу под названием replace, которая принимает имя файла и две строки, назовем их s1 и s2, которые не являются пустыми.Он откроет файл и запишет его содержимое в файл FILENAME.replace, заменив каждое вхождение s1 на s2.Вы включите некоторые тестовые файлы, чтобы показать работу вашей программы.$(RESET)"
	@echo ""
	@echo "$(GREEN)[Little helper]: $(RESET)"
	@echo "$(YELLOW)1.[filename]:$(RESET) имя файла"
	@echo "$(YELLOW)2.[search]:$(RESET) строка поиска"
	@echo "$(YELLOW)3.[replace]:$(RESET) строка замены"
	@echo ""
	@echo "$(GREEN)[For example]: $(RESET)"
	@echo "$(YELLOW)[Enter]: $(RESET) make test"
	@echo "$(YELLOW)[Enter]: $(RESET) ./replace tests/1 do .."
	@echo ""

all: $(NAME)

test:
	@echo "$(YELLOW)[Normal tests]$(GREEN)[START]$(RESET)"
	@./$(NAME) tests/1 "do" ".."
	@./$(NAME) tests/2 "l'" "LOL"
	@./$(NAME) tests/3 "обещали" "NOOOOOOOOOOOOOOOOOOOOO"

del_test:
	@rm $(TESTS)
	@echo "[$(RED)Deleting$(RESET)]$(RED) $(TESTS) deleted.$(RESET)"

clean:
	@rm $(OBJ)
	@echo "[$(RED)Deleting$(RESET)]$(RED) Object files deleted.$(RESET)"

fclean: clean
	@rm $(NAME)
	@echo "[$(RED)Deleting$(RESET)]$(RED) $(NAME) deleted.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
