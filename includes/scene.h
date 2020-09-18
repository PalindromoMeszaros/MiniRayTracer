/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 18:26:24 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/18 17:10:36 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include "../mlx/mlx.h"

typedef struct		s_vector
{
	double			x;
	double			y;
	double			z;
}					t_vector;

typedef struct		s_scene
{
	unsigned int	x_res;
	unsigned int	y_res;

	float			ambient;
	int				r_ambient_color;
	int				g_ambient_color;
	int				b_ambient_color;
	int				rgb_ambient_color;

	t_vector		o_camera;
	t_vector		n_camera;
	unsigned int	fov;

	float			x_light;
	float			y_light;
	float			z_light;
	float			brightness;
	int				r_color;
	int				g_color;
	int				b_color;
	int				rgb_color;
}					t_scene;

typedef struct		s_sphere
{
	t_vector		center;
	double			diameter;
	unsigned int	r_color;
	unsigned int	g_color;
	unsigned int	b_color;
	int				rgb;
}					t_sphere;

typedef struct		s_plane
{
	float			x;
	float			y;
	float			z;
	float			x_normal;
	float			y_normal;
	float			z_normal;
	unsigned int	r_color;
	unsigned int	g_color;
	unsigned int	b_color;
	int				rgb;
}					t_plane;

typedef	struct		s_square
{
	float			x_center;
	float			y_center;
	float			z_center;
	float			x_normal;
	float			y_normal;
	float			z_normal;
	float			side;
	unsigned int	r_color;
	unsigned int	g_color;
	unsigned int	b_color;
	int				rgb;
}					t_square;

typedef struct		s_cylinder
{
	float			x;
	float			y;
	float			z;
	float			x_normal;
	float			y_normal;
	float			z_normal;
	float			diameter;
	float			height;
	unsigned int	r_color;
	unsigned int	g_color;
	unsigned int	b_color;
	int				rgb;
}					t_cylinder;

typedef struct		s_triangle
{
	float			x_1;
	float			y_1;
	float			z_1;
	float			x_2;
	float			y_2;
	float			z_2;
	float			x_3;
	float			y_3;
	float			z_3;
}					t_triangle;

#endif
