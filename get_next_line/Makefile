

NAME = gnl.a

.PHONY: all clean fclean re

SRCS = get_next_line_utils.c \
	   get_next_line.c

INCLUDES = .

CC = gcc $(FLAGS)

FLAGS = -Wall -Wextra -Werror -I $(INCLUDES)

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

