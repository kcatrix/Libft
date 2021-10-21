CC=gcc
CFLAGS= -Wall -Wextra -Werror
NAME = libft.a
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: ${NAME}

${NAME}: $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)