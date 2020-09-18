
CC =			gcc

FLAGS =			-Wall -Wextra -Werror -g

RM =			rm -rf

LIB_DIR = 		libft

MLX_DIR		=	mlx

LIB_NAME = 		libft.a

DIR_HEADERS =	./includes/

DIR_SRCS =		./srcs/

DIR_OBJS =		./

MLX = 			-I ./mlx -L ./mlx -lmlx -framework OpenGL -framework AppKit

SRC =			miniRT.c \
				events.c \
				pixel_drawer.c \
				config/scene_config.c \
				config/object_config.c \
				math/vector_maths.c \
				geo_math/sphere.c

SRCS =			$(addprefix $(DIR_SRCS), $(SRC))

OBJS =			$(SRCS:.c=.o)

NAME =			miniRT

VALGR = 		*.dSYM

EXEC = 			*.out

all:			$(NAME)

$(NAME) :		$(OBJS)
				$(MAKE) -C $(LIB_DIR)
				$(MAKE) -C $(MLX_DIR)
				$(CC) $(FLAGS) -I $(DIR_HEADERS) $(MLX) $(OBJS) -o $(NAME)

%.o: %.c
				@gcc $(FLAGS) -I $(DIR_HEADERS) -c $< -o $@

bonus:

clean:
				$(RM) $(OBJS)
				$(MAKE) -C $(LIB_DIR) clean
				$(MAKE) -C $(MLX_DIR) clean

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(VALGR)
				$(RM) $(EXEC)
				$(MAKE) -C $(LIB_DIR) fclean
				$(MAKE) -C $(MLX_DIR) clean

re:				fclean all

.PHONY:			all, clean, fclean, re, bonus