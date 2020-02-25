/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:47:22 by pablomar          #+#    #+#             */
/*   Updated: 2020/02/14 18:41:39 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MINI_RT_H
# define MINI_RT_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include "../mlx/mlx.h"
# include "../includes/scene.h"
//Estructura para mlx
typedef struct		s_mlx
{
	void		*img_ptr; 	//puntero que recibe el retorno de mlx_new_image
	int			*data; 		// recibe el retorno de mlx_get_data_addr
	int			size_l;		//variables para llamar a mlx_get_dat_addr
	int			bpp;		//      "        "     "   "         "
	int			endian;		//   	"        "     "   "         "
	void		*mlx_ptr; 	//almacena el retorno de mlx_init
	void		*win_ptr;   //almacena el retorno de mlx_win
	
}					t_mlx;

int				minirt_exit(int key);
t_sphere    	*sphere_values(t_sphere *sphere);
unsigned int    rgb_to_hex(unsigned int red, unsigned int green, unsigned int blue);
t_sphere    	*sphere_values(t_sphere *sphere);
t_scene     *scene_values(t_scene *scene);


#endif