/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_play.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:11:06 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/19 22:34:13 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	get_row(int **grid, int *temp_arr, int step);
int		match_finder(int *grid_arr);
void	reset_grid_array(int **grid, int step);
void	write_grid(int **grid, int *tmp_array, int step);

void	recursive_play(int **grid, int step)
{
	int	tmp_array[7];
	int	check;

	if (step < 8 && step > -1)
	{
		reset_grid_array(grid, step);
		get_row(grid, tmp_array, step);
		check = match_finder(tmp_array);
		if (check == 1)
		{
			write_grid(grid, tmp_array, step);
			recursive_play(grid, step + 1);
		}
		else if (check == 0)
		{
			write_grid(grid, tmp_array, step);
			recursive_play(grid, step - 1);
		}
	}
}
