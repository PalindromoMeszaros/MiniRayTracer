/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:47:22 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/10 13:22:36 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include "../mlx/mlx.h"
# include "../includes/scene.h"

typedef struct		s_mlx
{
	void			*img_ptr; 	
	int				*data; 		
	int				size_l;		
	int				bpp;		
	int				endian;		
	void			*mlx_ptr; 	
	void			*win_ptr;  
}					t_mlx;

typedef struct		s_vector
{
	double			x;
	double			y;
	double			z;
}					t_vector;

/*
** events
*/
int				minirt_exit(t_mlx *mlx);
int				event_key(int key, t_mlx *mlx);
void			free_operations(t_mlx *mlx);

/*
** vector operations
*/
int             vector_len(t_vector vector);
t_vector        normalize_vector(t_vector vector);

/*
** sphere
*/
t_sphere		*sphere_values(t_sphere *sphere);

/*
** color manipulation
*/
unsigned int	rgb_to_hex(unsigned int red, unsigned int green, unsigned int blue);

/*
** scene config
*/
t_scene			*scene_values(t_scene *scene);

/*
** render
*/
void    		pixel_drawer(t_scene *scene, t_mlx *mlx);

#endif
