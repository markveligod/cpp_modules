NAME = start
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./whatever.cpp
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

$(NAME): $(OBJ)
	@clang++ -o $(NAME) $(OBJ) $(FLAGS)
	@echo "[$(GREEN)Success$(RESET)]$(GREEN) Successfully compiled $(NAME) project.$(RESET)"
	@echo ""
	@echo "$(CYAN)      /|/|"
	@echo "     ( @ @)"
	@echo "      ) ^ $(RESET)   CPP Module 07 (project 2020) $(CYAN)"
	@echo "     / |||       $(RESET) by ckakuna$(CYAN)"
	@echo "    / )|||_"
	@echo "   (_______)$(RESET)"
	@echo ""
	@echo "$(RED)[Exercise 00: A few functions]:$(RESET)"
	@echo "$(YELLOW)Напишите следующие шаблоны функций:" 
	@echo "	$(CYAN)swap:$(RESET) Свапните значения двух аргументов. Ничего не возвращайте."
	@echo "	$(CYAN)min:$(RESET)  Сравните два аргумента и верните наименьшее из них. Если два аргумента равны, тогда верните второй из них."
	@echo "	$(CYAN)max:$(RESET)  Сравните два аргумента и верните наибольшее из них. Если два аргумента равны, тогда верните второй из них."
	@echo ""
	@echo "$(RED)[For example]:$(RESET)"
	@echo "$(YELLOW)./$(NAME) $(RESET)"
	@echo ""

all: $(NAME)

clean:
	@rm $(OBJ)
	@echo "[$(RED)Deleting$(RESET)]$(RED) Object files deleted.$(RESET)"

fclean: clean
	@rm $(NAME)
	@echo "[$(RED)Deleting$(RESET)]$(RED) $(NAME) deleted.$(RESET)"

re: fclean all

.PHONY: all clean fclean re