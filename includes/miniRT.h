/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:47:22 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/10 16:33:47 by pablomar         ###   ########.fr       */
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
double          distance_two_points(t_vector point1, t_vector point2);
double          dot_product(t_vector vector1,t_vector vector2);

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
