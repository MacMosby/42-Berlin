/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:37:08 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/26 23:20:17 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_nbr(int num, int *dict)
{
	int	i;
	char	*str;

	i = 0;
	while (i < 32)
	{
		if (dict[i].input == num)
		{
			i = 0;
			str = dict[i].output;
			while (str[i] != 0)
			{
				ft_putchar(str[i]);
				i++;
			}
			i = 32;
		}
	}
}
