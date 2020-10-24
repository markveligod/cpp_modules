NAME = convert
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp ./Convert.cpp
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
	@echo "$(RED)[Exercise 00: Scalar conversion]:$(RESET)"
	@echo "$(YELLOW)Напишите программу которая принимает строку в представлении С++ литерального значения (в своей наиболее распространенной форме) как парметр. Этот литерал должен принадлежать одному из следующих скалярных типо: $(CYAN)char, int, float or double:$(RESET)"
	@echo ""
	@echo "$(RED)[For example]:$(RESET)"
	@echo "$(YELLOW)./$(NAME) 0$(RESET)"
	@echo "$(YELLOW)./$(NAME) nan$(RESET)"
	@echo "$(YELLOW)./$(NAME) 42.0f$(RESET)"
	@echo ""

all: $(NAME)

test: all
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 0
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 42
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 42.
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 42.f
	@echo "$(RED)|=====================================|$(RESET)"
	./convert nan
	@echo "$(RED)|=====================================|$(RESET)"
	./convert nanf
	@echo "$(RED)|=====================================|$(RESET)"
	./convert inf
	@echo "$(RED)|=====================================|$(RESET)"
	./convert inff
	@echo "$(RED)|=====================================|$(RESET)"
	./convert +inf
	@echo "$(RED)|=====================================|$(RESET)"
	./convert +inff
	@echo "$(RED)|=====================================|$(RESET)"
	./convert -inf
	@echo "$(RED)|=====================================|$(RESET)"
	./convert -inff
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 2147483647
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 2147483648
	@echo "$(RED)|=====================================|$(RESET)"
	./convert -2147483648
	@echo "$(RED)|=====================================|$(RESET)"
	./convert -2147483649
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 2147483647.f
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 2147483648.f
	@echo "$(RED)|=====================================|$(RESET)"
	./convert -2147483648.f
	@echo "$(RED)|=====================================|$(RESET)"
	./convert -2147483649.f
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 2147483647.
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 2147483648.
	@echo "$(RED)|=====================================|$(RESET)"
	./convert -2147483648.
	@echo "$(RED)|=====================================|$(RESET)"
	./convert -2147483649.
	@echo "$(RED)|=====================================|$(RESET)"
	./convert a
	@echo "$(RED)|=====================================|$(RESET)"
	./convert B
	@echo "$(RED)|=====================================|$(RESET)"
	./convert "~"
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 126
	@echo "$(RED)|=====================================|$(RESET)"
	./convert test
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 58
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 101
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 457846
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 12544.545f
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 54178652.41784187
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 42.ff
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 42.0ff
	@echo "$(RED)|=====================================|$(RESET)"
	./convert 42.04134f
	@echo "$(RED)|=====================================|$(RESET)"

clean:
	@rm $(OBJ)
	@echo "[$(RED)Deleting$(RESET)]$(RED) Object files deleted.$(RESET)"

fclean: clean
	@rm $(NAME)
	@echo "[$(RED)Deleting$(RESET)]$(RED) $(NAME) deleted.$(RESET)"

re: fclean all

.PHONY: all clean fclean re