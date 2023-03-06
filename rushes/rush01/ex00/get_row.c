/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_row.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:01:02 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/19 22:41:49 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_row(int **grid, int *temp_arr, int step)
{
	int	row_index;
	int	col_index;

	if (step % 2 == 0)
	{
		row_index = (step / 2) + 2;
		col_index = 0;
		while (col_index < 7)
		{
			temp_arr[col_index] = grid[row_index][col_index];
			col_index++;
		}
	}
	else
	{
		row_index = 0;
		col_index = (step / 2) + 2;
		while (row_index < 7)
		{
			temp_arr[row_index] = grid[row_index][col_index];
			row_index++;
		}
	}
}
