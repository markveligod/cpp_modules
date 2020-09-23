NAME = phonebook
FLAGS = -Wall -Wextra -Werror
SRC = ./main.cpp ./Data.Class.cpp ./Utils.cpp
HDRS = ./main.hpp ./Data.Class.hpp
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
	@echo "      ) ^ $(RESET)   CPP Module 00 (project 2020) $(CYAN)"
	@echo "     / |||       $(RESET) by ckakuna$(CYAN)"
	@echo "    / )|||_"
	@echo "   (_______)$(RESET)"
	@echo ""
	@echo "$(RED)[Exercise 01: My Awesome PhoneBook]:$(RESET)"
	@echo "$(YELLOW)При запуске программы пользователю будет предложено ввести данные: вы должны принять команду ADD, команду SEARCH или команду EXIT. Любой другой вход отбрасывается.Программа запускается пустой (без контактов), не использует динамическое распределение и не может хранить более 8 контактов.$(RESET)"
	@echo "$(CYAN)      ,   ,"
	@echo "     /////|"
	@echo "    ///// |"
	@echo "   |~~~|  |"
	@echo "   |===|  |"
	@echo "   |$(RESET)e$(CYAN)  |  |"
	@echo "   |$(RESET)x 0$(CYAN)|  |"
	@echo "   |  $(RESET)1$(CYAN)| /"
	@echo "   |===|/"
	@echo "   '---'"
	@echo ""
	@echo "$(GREEN)[START]:$(RESET) ./$(NAME)"
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
