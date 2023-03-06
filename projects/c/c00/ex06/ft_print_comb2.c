/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:30:15 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/15 22:29:45 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inner_loops(char i, char j, char m, char n)
{
	while (m < 58)
	{
		while (n < 58)
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, " ", 1);
			write(1, &m, 1);
			write(1, &n, 1);
			if (!(i == 57 && j == 56 && m == 57 && n == 57))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			n++;
		}
		m++;
		n = 48;
	}
}

void	ft_outer_loops(char i, char j, char m, char n)
{
	while (i < 58)
	{
		while (j < 58)
		{
			ft_inner_loops(i, j, m, n);
			j++;
			if (j < 57)
			{
				m = i;
				n = j + 1;
			}
			else
			{
				m = i + 1;
				n = 48;
			}
		}
		i++;
		j = 48;
		m = i;
		n = j + 1;
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	m;
	char	n;

	i = 48;
	j = 48;
	m = 48;
	n = 49;
	ft_outer_loops(i, j, m, n);
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
