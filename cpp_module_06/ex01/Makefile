NAME = start
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp
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
	@echo "      ) ^ $(RESET)   CPP Module 06 (project 2020) $(CYAN)"
	@echo "     / |||       $(RESET) by ckakuna$(CYAN)"
	@echo "    / )|||_"
	@echo "   (_______)$(RESET)"
	@echo ""
	@echo "$(RED)[Exercise 01: Serialization]:$(RESET)"
	@echo "$(YELLOW)Напишите функцию void * serialize(void); Эта функция будет возвращать адресс на heap последовательностей байтов, что представляют фрагмент сериализованных данных. Сериализованные данные представляют собой конкатенацию случайного массива из 8 буквенно-цифровых символов, случайного целого числа и второго случайного массива из 8 буквенно-цифровых символов. Не стесняйтесь использовать все, что вам нравится, чтобы генерировать случайные значения:$(RESET)"
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