/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_finder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:35:20 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/19 23:41:05 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_perms[24][6] = {
{4, 1, 1, 2, 3, 4},
{3, 2, 1, 2, 4, 3},
{3, 1, 1, 3, 2, 4},
{3, 2, 1, 3, 4, 2},
{2, 2, 1, 4, 2, 3},
{2, 3, 1, 4, 3, 2},
{3, 1, 2, 1, 3, 4},
{2, 2, 2, 1, 4, 3},
{3, 1, 2, 3, 1, 4},
{3, 2, 2, 3, 4, 1},
{2, 2, 2, 4, 1, 3},
{2, 3, 2, 4, 3, 1},
{2, 1, 3, 1, 2, 4},
{2, 2, 3, 1, 4, 2},
{2, 1, 3, 2, 1, 4},
{2, 2, 3, 2, 4, 1},
{2, 2, 3, 4, 1, 2},
{2, 3, 3, 4, 2, 1},
{1, 2, 4, 1, 2, 3},
{1, 3, 4, 1, 3, 2},
{1, 2, 4, 2, 1, 3},
{1, 3, 4, 2, 3, 1},
{1, 3, 4, 3, 1, 2},
{1, 4, 4, 3, 2, 1}
};

int	find_match(int *grid_arr, int i, int row, int check)
{
	while (grid_arr[i] != 0 && grid_arr[i] == g_perms[row][i])
	{
		i++;
	}
	if (grid_arr[i] == 0)
	{
		i = 0;
		while (i < 6)
		{
			grid_arr[i] = g_perms[row][i];
			i++;
		}
		grid_arr[i] = row + 1;
		check = 1;
		return (check);
	}
	else
	{
		check = 0;
		return (check);
	}
}

int	match_finder(int *grid_arr)
{
	int	i;
	int	row;
	int	check;

	i = 0;
	check = 0;
	row = grid_arr[6];
	while (row < 24)
	{
		check = find_match(grid_arr, i, row, check);
		row++;
	}
	grid_arr[6] = 0;
	return (check);
}
