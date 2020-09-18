/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene_config.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:17:56 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/10 16:32:55 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/scene.h"


t_scene     *scene_values(t_scene *scene)
{ 
	/*
    **Resolution
	*/
	scene->x_res = 1280;
	scene->y_res = 800;

	/*
	**Ambient Lighting
	*/
	scene->ambient = 0.5;
	scene->r_ambient_color = 255;
	scene->g_ambient_color = 255;
	scene->b_ambient_color = 255;
	scene->rgb_ambient_color = rgb_to_hex(scene->r_ambient_color, scene->g_ambient_color, scene->b_ambient_color);

	/*
	**Camera
	*/
	scene->o_camera.x = 0;
	scene->o_camera.y = 0;
	scene->o_camera.z = 20;
	scene->n_camera.x = 0;
	scene->n_camera.y = 0;
	scene->n_camera.z = 1;
	scene->fov = 60;

	/*
	**Light
	*/
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