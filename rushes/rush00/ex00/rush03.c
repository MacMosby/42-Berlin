/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmitas <nmitas@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:27:25 by nmitas            #+#    #+#             */
/*   Updated: 2023/02/12 18:18:57 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	horizontal(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
		{
			ft_putchar(65);
		}
		else if (col < x)
		{
			ft_putchar(66);
		}
		else
		{
			ft_putchar(67);
		}
		col++;
	}
	ft_putchar(10);
}

void	middle(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if ((col == 1) || (col == x))
		{
			ft_putchar(66);
		}
		else
		{
			ft_putchar(32);
		}
		col++;
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	while (row <= y)
	{
		if (row == 1 || row == y)
		{
			horizontal(x);
		}
		else
		{
			middle(x);
		}
		row++;
	}
}
