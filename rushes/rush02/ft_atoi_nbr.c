/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:10:19 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/26 19:02:48 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi_nbr(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 0;
	result = 0;
	while (str[i] == 45)
	{
		if (str[i] == 45)
			minus++;
		i++;
	}	
	while (47 < str[i] && str[i] < 58)
	{
		result *= 10;
		result += (int)(str[i] - 48);
		i++;
	}
	if (minus % 2 == 1)
		result *= -1;
	return (result);
}
/*
int main()
{
	char *str = " ---+--+12i3409ab567";
	int	result;

	result = ft_atoi(str);
	printf("%d", result);
	return (0);
}
*/
