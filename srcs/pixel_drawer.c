/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_drawer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:34:35 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/18 15:38:00 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/scene.h"

/*
**This loop asign pixels to background
*/

void    pixel_drawer(t_scene *scene, t_mlx *mlx)
{
    unsigned int	count_x;
    unsigned int	count_y;

    count_y = -1;
    while (++count_y < scene->y_res)
        {
            count_x = -1;
            while (++count_x < scene->x_res)
            {
                if (count_x % 3)
                    mlx->data[count_y * scene->x_res + count_x] = scene->rgb_color;
                else
                    mlx->data[count_y * scene->x_res + count_x] = scene->rgb_color;
            }
        }
}