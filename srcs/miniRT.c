/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:11:42 by pablomar          #+#    #+#             */
/*   Updated: 2020/02/13 14:18:20 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"

int		main(void)
{
	t_mlx	*mlx;
	int		count_w;
	int		count_h;

	if (!(mlx = (t_mlx*)malloc(sizeof(t_mlx))))
		return (-1);
	count_h = -1;
	mlx->mlx_ptr = mlx_init();
	mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, WIN_WIDTH, WIN_HEIGHT, "miniRT - A simple raytracing engine");
	mlx->img_ptr = mlx_new_image(mlx->mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	mlx->data = (int *)mlx_get_data_addr(mlx->img_ptr, &mlx->bpp, &mlx->size_l, &mlx->endian);
	while (++count_h < WIN_HEIGHT)
	{
		count_w = -1;
		while (++count_w < WIN_WIDTH)
		{
			if (count_w % 3)
				mlx->data[count_h * WIN_WIDTH + count_w] = 0x15A6BD;
			else
				mlx->data[count_h * WIN_WIDTH + count_w] = 0xE110A8;
		}
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img_ptr, 0, 0);
	mlx_key_hook(mlx->win_ptr, minirt_exit, (void*)0);
	mlx_loop(mlx->mlx_ptr);
	free(mlx);
	//system("leaks a.out");
	return (0);
}