/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:11:42 by pablomar          #+#    #+#             */
/*   Updated: 2020/08/26 14:42:44 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/scene.h"

int		main(/*int argc, char **argv*/)
{
	unsigned int	count_w;
	unsigned int	count_h;
	t_mlx			*mlx;
	t_scene			*scene;
	t_sphere 		*sphere;
	
	count_h = -1;
	if (!(scene = (t_scene*)malloc(sizeof(t_scene))))
		return (-1);
	if (!(mlx = (t_mlx*)malloc(sizeof(t_mlx))))
		return (-1);
	 if(!(sphere = malloc(sizeof(t_sphere))))
        return(-1);
	scene = scene_values(scene);	
	sphere = sphere_values(sphere);
	mlx->mlx_ptr = mlx_init();
	mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, scene->x_res, scene->y_res, "miniRT - A simple raytracing engine");
	mlx->img_ptr = mlx_new_image(mlx->mlx_ptr, scene->x_res, scene->x_res);
	mlx->data = (int *)mlx_get_data_addr(mlx->img_ptr, &mlx->bpp, &mlx->size_l, &mlx->endian);
	/*
	**This loop asign pixels to background
	*/
	while (++count_h < scene->y_res)
	{
		count_w = -1;
		while (++count_w < scene->x_res)
		{
			if (count_w % 3)
				mlx->data[count_h * scene->x_res + count_w] = sphere->rgb;
			else
				mlx->data[count_h * scene->x_res + count_w] = sphere->rgb;
		}
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img_ptr, 0, 0);
	mlx_key_hook(mlx->win_ptr, minirt_exit, (void*)0);
	mlx_loop(mlx->mlx_ptr);
	return (0);
}