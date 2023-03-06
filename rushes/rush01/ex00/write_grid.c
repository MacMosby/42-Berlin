/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sveselov <sveselov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:50:07 by sveselov          #+#    #+#             */
/*   Updated: 2023/02/19 22:46:10 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_grid(int **grid, int *tmp_array, int step)
{
	int	i;
	int	j;
	int	row;
	int	col;

	row = (step / 2) + 2;
	col = (step / 2) + 2;
	i = 0;
	j = 0;
	while (i < 7 && j < 7)
	{
		if (step % 2 == 0)
		{
			grid[row][j] = tmp_array[i];
		}
		else
		{
			grid[j][col] = tmp_array[i];
		}
		i++;
		j++;
	}
}
