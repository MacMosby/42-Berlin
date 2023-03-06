/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:46:36 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/15 22:31:31 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_nums(char first, char middle, char last)
{
	while (last < 58)
	{
		write(1, &first, 1);
		write(1, &middle, 1);
		write(1, &last, 1);
		if (first < 55 || middle < 56 || last < 57)
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
		last++;
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	middle;
	char	last;

	first = 48;
	middle = 49;
	last = 50;
	while (first < 56)
	{
		while (middle < 57)
		{
			ft_put_nums(first, middle, last);
			middle++;
			last = middle +1;
		}
		first++;
		middle = first + 1;
		last = middle + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
