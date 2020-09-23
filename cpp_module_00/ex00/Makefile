NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRC = ./megaphone.cpp
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
	@echo "[$(GREEN)Success$(RESET)]$(GREEN) Successfully compiled megaphone project.$(RESET)"
	@echo ""
	@echo "$(CYAN)      /|/|"
	@echo "     ( @ @)"
	@echo "      ) ^ $(RESET)   CPP Module 00 (project 2020) $(CYAN)"
	@echo "     / |||       $(RESET) by ckakuna$(CYAN)"
	@echo "    / )|||_"
	@echo "   (_______)$(RESET)"
	@echo ""
	@echo "$(RED)[Exercise 00: Megaphone]:$(RESET)"
	@echo "$(YELLOW)Просто чтобы убедиться, что все бодрствуют, напишите программу, которая имеет следующее поведение:$(RESET)"
	@echo ""
	@echo "$(CYAN))))))))"
	@echo "-------"
	@echo "|^   ^|"
	@echo "|O   O|"
	@echo "|  ~  |"
	@echo " \ O / $(RESET) DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
	@echo "$(CYAN)  | |$(RESET)"
	@echo ""
	@echo "$(RED)[For example]:$(RESET)"
	@echo "$(YELLOW)./megaphone Damnit " ! " "Sorry students, I thought this thing was off."$(RESET)"
	@echo ""

all: $(NAME)

clean:
	@rm $(OBJ)
	@echo "[$(RED)Deleting$(RESET)]$(RED) Object files deleted.$(RESET)"

fclean: clean
	@rm $(NAME)
	@echo "[$(RED)Deleting$(RESET)]$(RED) megaphone deleted.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
