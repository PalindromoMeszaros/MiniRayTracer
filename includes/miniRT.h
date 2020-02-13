/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:47:22 by pablomar          #+#    #+#             */
/*   Updated: 2020/02/13 18:28:52 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MINI_RT_H
# define MINI_RT_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include "../mlx/mlx.h"

# define WIN_WIDTH 800
# define WIN_HEIGHT 600

//Estructura para mlx
typedef struct		s_mlx
{
	void		*img_ptr; //puntero que recibe el retorno de mlx_new_image
	int			*data; // recibe el retorno de mlx_get_data_addr
	int			size_l;//variables para llamar a mlx_get_dat_addr
	int			bpp;//      "        "     "   "         "
	int			endian;//   "        "     "   "         "
	void		*mlx_ptr; //almacena el retorno de mlx_init
	void		*win_ptr;     //almacena el retorno de mlx_win
	
}					t_mlx;

int		minirt_exit(int key, t_scene *scene, t_mlx *mlx);
void    final_frees(t_mlx *mlx, t_scene *scene);

#endif