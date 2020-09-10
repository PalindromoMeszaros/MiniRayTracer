/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_maths.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:14:19 by pablomar          #+#    #+#             */
/*   Updated: 2020/09/10 13:14:21 by pablomar         ###   ########.fr       */
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