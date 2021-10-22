CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME 	= libft.a
SRC		= $(wildcard *.c)
OBJ		= $(SRC:.c=.o)

all: ${NAME}

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

${NAME}: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re: fclean all 

.PHONY: clean fclean