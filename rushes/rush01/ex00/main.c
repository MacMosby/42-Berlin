/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:16:40 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/19 23:36:25 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		**create_grid(int size);
int		inta_builder(char *str, int *views_array);
void	grid_builder(int *views, int **grid);
void	recursive_play(int **grid, int step);
void	print_grid(int **grid);

int	main(int argc, char **argv)
{
	int	**grid;
	int	input_array[16];
	int	arr_check;

	arr_check = 0;
	grid = create_grid(7);
	if (argc == 2)
	{
		arr_check = inta_builder(argv[1], input_array);
		grid_builder(input_array, grid);
		recursive_play(grid, 0);
	}
	if (grid[2][2] == 0 || arr_check == 0)
	{
		write(1, "ERROR\n", 6);
	}
	else
	{
		print_grid(grid);
	}
	free(grid);
	return (0);
}
