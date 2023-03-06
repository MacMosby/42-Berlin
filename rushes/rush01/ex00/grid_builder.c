/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_builder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:10:37 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/19 22:42:40 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	grid_builder(int *views, int **grid)
{
	int	index;

	index = 0;
	while (index < 16)
	{
		if (index < 4)
		{
			grid[0][index + 2] = views[index];
		}
		else if (index < 8)
		{
			grid[1][index - 2] = views[index];
		}
		else if (index < 12)
		{
			grid[index - 6][0] = views[index];
		}
		else if (index < 16)
		{
			grid[index - 10][1] = views[index];
		}
		index++;
	}
}
