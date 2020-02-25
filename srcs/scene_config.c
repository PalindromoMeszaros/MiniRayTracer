/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene_config.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:17:56 by pablomar          #+#    #+#             */
/*   Updated: 2020/02/14 18:45:51 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/scene.h"


t_scene     *scene_values(t_scene *scene)
{ 
    //Resolution
	scene->x_res = 700;
	scene->y_res = 700;

	//Ambient Lighting
	scene->ambient = 0.5;
	scene->r_ambient_color = 255;
	scene->g_ambient_color = 255;
	scene->b_ambient_color = 255;
	scene->rgb_ambient_color = rgb_to_hex(scene->r_ambient_color, scene->g_ambient_color, scene->b_ambient_color);

	//Camera
	scene->x_camera = 0;
	scene->y_camera = 0;
	scene->z_camera = 20;
	scene->x_normal = 0;
	scene->y_normal = 0;
	scene->z_normal = 1;
	scene->fov = 60;

	//Light
   	scene->x_light = 0;
	scene->y_light = 0;
	scene->z_light = 20.6;
	scene->brightness = 0.6;
	scene->r_color = 10;
	scene->g_color = 0;
	scene->b_color = 255;
	scene->rgb_color = rgb_to_hex(scene->r_color, scene->g_color, scene->b_color);  

    return(scene);
}