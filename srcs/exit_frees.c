/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_frees.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:17:03 by pablomar          #+#    #+#             */
/*   Updated: 2020/08/26 14:56:58 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/miniRT.h"

//Incluir funciones para liberar memorias varias

int	minirt_exit(int key)
{
	if (key == '5')
    {
        system("leaks miniRT");
		exit(0);
    }
	return (0);	
}