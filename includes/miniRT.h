/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:47:22 by pablomar          #+#    #+#             */
/*   Updated: 2020/08/28 17:43:27 by pablomar         ###   ########.fr       */
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

int				minirt_exit(t_mlx *mlx);
int				event_key(int key, t_mlx *mlx);
t_sphere		*sphere_values(t_sphere *sphere);
unsigned int	rgb_to_hex(unsigned int red, unsigned int green, unsigned int blue);
t_scene			*scene_values(t_scene *scene);
void    		pixel_drawer(t_scene *scene, t_mlx *mlx);
void			free_operations(t_mlx *mlx);

#endif
