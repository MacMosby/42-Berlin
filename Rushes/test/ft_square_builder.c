/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_builder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:14:05 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/03/01 15:40:13 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char map[9][9] = {
    {'o', '.', 'o', '.', '.', '.', '.', '.', '.'},
    {'.', '.', 'o', '.', '.', '.', '.', '.', '.'},
    {'.', '.', 'o', '.', 'o', '.', '.', '.', '.'},
    {'.', '.', 'o', '.', '.', '.', '.', '.', '.'},
    {'o', 'o', 'o', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', 'o'}
};

int g_num_of_rows = 9;
int	g_width = 9;

int g_max_row = -1;
int g_max_col = -1;
int g_max_size = 0;
char	empty = '.';

void	ft_write_fulls(int row, int col, int range)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < range)
	{
		while (j < range)
		{
			map[row + i][col + j] = 'x';
			j++;
		}
		i++;
		j = 0;
	}
}

int	is_range_possible(int row, int col, int range)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= range)
	{
		while (j <= range)
		{
			if (map[row + i][col + j] != empty)
			{
				return (0);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

int	ft_find_max_range(int row, int col)
{
	int	range;

	range = 0;
	while (row + range < g_num_of_rows && col + range < g_width)
	{
		if (is_range_possible(row, col, range) == 1)
		{
			range++;
		}
		else
		{
			return (range);
		}
	}
	return (range - 1);
}

void	ft_set_maximum(int row, int col, int range)
{
	g_max_size = range;
	g_max_row = row;
	g_max_col = col;
}

void	ft_square_builder(void)
{
	int	row;
	int	col;
	int	new_range;

	row = 0;
	col = 0;
	while (row < g_num_of_rows)
	{
		while (col < g_width)
		{
			if (map[row][col] == empty)
			{
				new_range = ft_find_max_range(row, col);
				if (new_range > g_max_size)
				{
					ft_set_maximum(row, col, new_range);
				}
			}
			col++;
		}
		row++;
		col = 0;
	}
	ft_write_fulls(g_max_row, g_max_col, g_max_size);
}
