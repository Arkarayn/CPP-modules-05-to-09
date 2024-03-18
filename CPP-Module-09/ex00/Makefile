NAME		= btc

RM			= rm -rf

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g -Wuninitialized

SRC			= main.cpp BitcoinExchange.cpp

OBJ			= $(SRC:.cpp=.o)

BARS := "▰▱▱▱▱▱▱▱▱▱ 17%" "▰▰▱▱▱▱▱▱▱▱ 23%" "▰▰▰▱▱▱▱▱▱▱ 38%" "▰▰▰▰▱▱▱▱▱▱ 42%" "▰▰▰▰▰▱▱▱▱▱ 51%"  \
		"▰▰▰▰▰▰▱▱▱▱ 65%" "▰▰▰▰▰▰▰▱▱▱ 79%" "▰▰▰▰▰▰▰▰▱▱ 87%" "▰▰▰▰▰▰▰▰▰▱ 94%" "▰▰▰▰▰▰▰▰▰▰ 100%" \

all:	$(NAME)

%.o:%.cpp
	@$(CC) $(CFLAGS) -c  $< -o $@

$(NAME): $(OBJ)
	@if [ ! -f ${NAME} ]; then \
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME); \
		make -s loading; \
	fi

clean:
	$(RM) ${OBJ};
	clear

fclean: clean
	@if [ -f ${NAME} ]; then \
		$(RM) $(NAME); \
	fi
	clear

re: fclean all

go: re
	clear
	@./$(NAME) input.csv
	
push: fclean
	git add .
	git commit
	git push

loading:
	for bar in $(BARS); do \
		clear; \
		echo "\n\n\n\t\t\t\033[1;31m$$bar\033[0m"; \
		sleep 0.08; \
	done
	clear
	@echo "Use \033[1;4mmake go\033[0m to run the program fast :D"

.PHONY: all clean fclean re go push
