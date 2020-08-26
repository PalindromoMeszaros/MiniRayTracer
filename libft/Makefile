# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablomar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/13 16:55:19 by pablomar          #+#    #+#              #
#    Updated: 2020/01/19 16:56:27 by pablomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs

RM = rm -f

CC = gcc

CCFLAGS = -Wall -Werror -Wextra

NAME	= libft.a
SRC		= ft_putnbr_fd.c ft_atoi.c	ft_putstr_fd.c ft_bzero.c ft_split.c \
		  ft_calloc.c ft_strchr.c ft_isalnum.c ft_strdup.c ft_isalpha.c \
		  ft_strjoin.c ft_isascii.c ft_strlcat.c ft_isdigit.c ft_strlcpy.c \
		  ft_isprint.c ft_strlen.c ft_itoa.c ft_itoa_base.c ft_strmapi.c ft_strncmp.c \
		  ft_memccpy.c ft_strnstr.c ft_memchr.c ft_strrchr.c ft_memcmp.c \
		  ft_strtrim.c ft_memcpy.c ft_substr.c ft_memmove.c ft_tolower.c \
		  ft_memset.c ft_toupper.c ft_putchar_fd.c ft_putendl_fd.c ft_strcmp.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUSOBJ = $(BONUSSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ) $(BONUSOBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

so: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(CC) -shared -fPIC -Wl,-soname,libft.so -o libft.so $(OBJ) $(BONUSOBJ)
