/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:37:47 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/03/01 21:56:02 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_print_map(char **map)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < g_n)
	{
		while (j < g_len)
		{
			c = map[i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}
