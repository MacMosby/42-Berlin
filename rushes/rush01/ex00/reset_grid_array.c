/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_grid_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:10:32 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/19 22:40:46 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	reset_grid_array(int **grid, int step)
{
	int	counter;
	int	i;

	if (step % 2 == 0)
	{
		counter = step / 2;
		counter += 2;
		i = counter;
		while (i < 6)
		{
			grid[counter][i] = 0;
			i++;
		}
	}
	else
	{
		counter = (step / 2);
		counter += 2;
		i = counter + 1;
		while (i < 6)
		{
			grid[i][counter] = 0;
			i++;
		}
	}
}
