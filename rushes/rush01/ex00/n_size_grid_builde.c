/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_size_grid_builde.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sveselov <sveselov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:36:50 by sveselov          #+#    #+#             */
/*   Updated: 2023/02/19 23:39:05 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	**create_grid(int size)
{	
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(size * sizeof(int *));
	i = 0;
	j = 0;
	while (i < size)
	{
		grid[i] = (int *) malloc(size * sizeof(int));
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
