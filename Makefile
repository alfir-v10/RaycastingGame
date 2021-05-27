
.PHONY: clean fclean re all

NAME = "cub3D"

INCLUDES = includes
HEADER = includes/cub.h
LIBFT = libft.a
LIBFT_FOLDER = libft
GNL = gnl.a
GNL_FOLDER = get_next_line
MLX = libmlx.a
MLX_FOLDER = minilibx_opengl

FLAGS = -g -Wall -Wextra -Werror -I $(INCLUDES) -I $(GNL_FOLDER) -I $(LIBFT_FOLDER)
SRC_DIR = srcs/
OBJ_DIR = obj/

SRC_FILES = $(shell ls -1 srcs | grep "\.c")
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

MAC = -framework OpenGL -framework AppKit -lm

obj/%.o: srcs/%.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

all: $(NAME)

$(LIBFT) :
	$(MAKE) -C $(LIBFT_FOLDER)
	cp $(LIBFT_FOLDER)/$(LIBFT) .

$(GNL):
	$(MAKE) -C $(GNL_FOLDER)
	cp $(GNL_FOLDER)/$(GNL) .

$(MLX):
	$(MAKE) -C $(MLX_FOLDER)
	cp $(MLX_FOLDER)/$(MLX) .

$(NAME): $(LIBFT) $(GNL) $(MLX) $(OBJ) $(HEADER)
	gcc $(FLAGS) -o $(NAME) $(LIBFT) $(GNL) $(MLX) $(OBJ) $(MAC)

clean:
	make clean -C $(LIBFT_FOLDER)
	make clean -C $(GNL_FOLDER)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_FOLDER)
	make fclean -C $(GNL_FOLDER)
	make clean -C $(MLX_FOLDER)
	rm -f $(NAME)
	rm -f $(LIBFT)
	rm -f $(GNL)
	rm -f $(MLX)

re: fclean all
