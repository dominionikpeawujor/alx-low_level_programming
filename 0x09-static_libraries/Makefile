CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

SRCS = _putchar.c \
       _islower.c \
       _isalpha.c \
       _abs.c \
       _isupper.c \
       _isdigit.c \
       _strlen.c \
       _puts.c \
       _strcpy.c \
       _atoi.c \
       _strcat.c \
       _strncat.c \
       _strncpy.c \
       _strcmp.c \
       _memset.c \
       _memcpy.c \
       _strchr.c \
       _strspn.c \
       _strpbrk.c \
       _strstr.c

OBJS = $(SRCS:.c=.o)

LIB = libmy.a

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re

