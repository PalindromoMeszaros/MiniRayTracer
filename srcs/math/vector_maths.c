/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_maths.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:14:19 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/10 16:33:14 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"
#include "../includes/scene.h"

int             vector_len(t_vector vector)
{
    double len;

    len = sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vector.z, 2));
    return len;
}

t_vector        normalize_vector(t_vector vector)
{
    t_vector normalized;

    normalized.x = vector.x / vector_len(vector);
    normalized.y = vector.y / vector_len(vector);
    normalized.z = vector.z / vector_len(vector);
    return normalized; 
}

double          distance_two_points(t_vector point1, t_vector point2)
{
    t_vector    distance_vector;

    distance_vector.x = point2.x - point1.x;
    distance_vector.y = point2.y - point1.y;
    distance_vector.z = point2.z - point1.z;
    return vector_len(distance_vector);
}

double          dot_product(t_vector vector1,t_vector vector2)
{
    return ((vector1.x * vector2.x) + (vector1.y * vector2.y) + (vector1.z * vector2.z));
}