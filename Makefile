
CC =			gcc

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf

LIB_DIR = 		libft

LIB_NAME = 		libft.a

DIR_HEADERS =	./includes/

DIR_SRCS =		./srcs/

DIR_OBJS =		./

MLX = 			-I ./mlx -L ./mlx -lmlx -framework OpenGL -framework AppKit

SRC =			miniRT.c \
				key_instructions.c \
				scene_config.c \
				object_config.c

SRCS =			$(addprefix $(DIR_SRCS), $(SRC))

OBJS =			$(SRCS:.c=.o)

NAME =			miniRT

all:			$(NAME)

$(NAME) :		$(OBJS)
				$(MAKE) -C $(LIB_DIR)
				$(CC) $(FLAGS) -I $(DIR_HEADERS) $(MLX) $(OBJS) -o $(NAME)

%.o: %.c
				@gcc $(FLAGS) -I $(DIR_HEADERS) -c $< -o $@

bonus:

clean:
				$(RM) $(OBJS)
				$(MAKE) -C $(LIB_DIR) clean

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(LIB_DIR)/$(LIB_NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re, bonus