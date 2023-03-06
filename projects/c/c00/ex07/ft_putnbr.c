/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:45:21 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/15 22:52:01 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	result;
	long int	digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		result = nb / 10;
		ft_putnbr(result);
		digit = (nb - (result * 10)) + 48;
		write(1, &digit, 1);
	}
	else if (nb < 10)
	{
		digit = nb + 48;
		write(1, &digit, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(532);
	ft_putnbr(-73912);
	ft_putnbr(0);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	return (0);
}
*/
