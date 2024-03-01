NAME = serialize

RM = rm -rf

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -Wuninitialized

SRC = 	main.cpp Serializer.cpp
O_SRC = $(SRC:.cpp=.o)

BARS := "▰▰▱▱▱▱▱▱▱▱▱ 17%" "▰▰▰▱▱▱▱▱▱▱▱ 23%" "▰▰▰▰▱▱▱▱▱▱▱ 38%" "▰▰▰▰▰▱▱▱▱▱▱ 42%" "▰▰▰▰▰▰▱▱▱▱▱ 51%" \
		"▰▰▰▰▰▰▰▱▱▱▱ 65%" "▰▰▰▰▰▰▰▰▱▱▱ 79%" "▰▰▰▰▰▰▰▰▰▱▱ 87%" "▰▰▰▰▰▰▰▰▰▰ 94%" "▰▰▰▰▰▰▰▰▰▰ 100%" \

all: $(NAME)
	@for bar in $(BARS); do \
		clear; \
		echo "\n\n\n\t\t\t\033[1;31m$$bar\033[0m"; \
		sleep 0.08; \
	done
	clear
	@echo "Use \033[1;4mmake go\033[0m to run the program fast :D"

$(NAME): $(O_SRC)
	$(CC) $(CFLAGS) $(O_SRC) -o $(NAME)

clean:
	$(RM) $(O_SRC)
	clear

fclean: clean
	$(RM) $(NAME)

re: clean all
	clear

go: clean all
	clear
	@./$(NAME)

cpp: 
	touch main.cpp
	@echo "cpp&hpp files name: "
	@read name; \
	touch $$name.cpp $$name.hpp \
	
push: fclean
	git add .
	git commit
	git push

.PHONY: all clean fclean go re push
