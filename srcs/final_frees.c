/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_frees.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:51:34 by pablomar          #+#    #+#             */
/*   Updated: 2020/02/13 15:58:02 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"

void    final_frees(t_mlx *mlx, t_scene *scene)
{
    
	free(mlx->win_ptr);
	free(mlx);
	free(scene); 
}