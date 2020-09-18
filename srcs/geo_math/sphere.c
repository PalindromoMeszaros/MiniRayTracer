/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:01:01 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/18 18:07:41 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/miniRT.h"
#include "../../includes/scene.h"


int     sphere_intersection(t_scene *scene, t_sphere sphere)
{
    t_vector dist_camera_center;
    double tca;

    dist_camera_center = vector_difference(sphere.center,scene->o_camera);
    tca = dot_product(dist_camera_center,//Direccion_Rayo);
}