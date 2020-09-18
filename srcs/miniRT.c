/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:11:42 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/18 17:06:32 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/scene.h"

int		main(/*int argc, char **argv*/)
{
	t_mlx			*mlx;
	t_scene			*scene;
	t_sphere		sphere;
	
	if (!(scene = (t_scene*)malloc(sizeof(t_scene))))
		return (-1);
	if (!(mlx = (t_mlx*)malloc(sizeof(t_mlx))))
		return (-1);
	scene_values(scene);
	sphere_values(sphere);	
	mlx->mlx_ptr = mlx_init();
	mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, scene->x_res, scene->y_res, "miniRT - A simple raytracing engine");
	mlx->img_ptr = mlx_new_image(mlx->mlx_ptr, scene->x_res, scene->x_res);
	mlx->data = (int *)mlx_get_data_addr(mlx->img_ptr, &mlx->bpp, &mlx->size_l, &mlx->endian);
	render(scene,mlx,sphere);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img_ptr, 0, 0);
	mlx_hook(mlx->win_ptr, 17, (1L << 17), minirt_exit, mlx);
	mlx_hook(mlx->win_ptr, 2, (1L << 0), event_key, mlx);
	mlx_loop(mlx->mlx_ptr);
	return (0);
}