#!/bin/sh
# Script para compilar con la minilibx
gcc -I ./mlx -L ./mlx -lmlx -framework OpenGL -framework AppKit ./srcs/miniRT.c ./includes/miniRT.h
