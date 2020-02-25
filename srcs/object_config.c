/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object_config.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 17:40:39 by pablomar          #+#    #+#             */
/*   Updated: 2020/02/14 18:50:23 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/scene.h"

unsigned int         rgb_to_hex(unsigned int red, unsigned int green, unsigned int blue)
{
    unsigned int hex_color;

    hex_color = (red<<16)|(green<<8)|blue; 
	return (hex_color);
}         

t_sphere    *sphere_values(t_sphere *sphere)
{
    sphere->x_center = 0;
    sphere->y_center = 0;
    sphere->z_center = 200;
    sphere->diameter = 10;
    sphere->r_color = 27;
    sphere->g_color = 99;
    sphere->b_color = 130;
    sphere->rgb = rgb_to_hex(sphere->r_color, sphere->g_color, sphere->b_color);
    return(sphere);
}

