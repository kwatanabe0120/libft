NAME = libft.a

SRC = $(wildcard ./*.c)

OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)


re: fclean all