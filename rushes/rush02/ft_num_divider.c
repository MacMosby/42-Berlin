/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_divider.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:06:10 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/26 23:28:20 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return nb * (ft_recursive_power(nb, power - 1));
	}
}





void ft_num_divider(unsigned int num, int *arr, int power, int index)
{
	int	multiplier;

	if (num > 9)
	{
		multiplier = ft_recursive_power(10, power);
		if (num / multiplier > 0)
		{
			if (power % 3 == 0)
			{
				arr[index] = (num / multiplier);
				if (power == 9)
				{
					arr[index + 1] = 1000000000;
					index++;
				}
				else if (power == 6)
				{
					arr[index + 1] = 1000000;
					index++;
				}
				else if (power == 3)
				{
					arr[index + 1] = 1000;
					index++;
				}
			}
			else if (power % 3 == 1)
			{
				arr[index] = (num / multiplier) * 10;
			}
			else
			{
				arr[index] = (num / multiplier);
				arr[index + 1] = 100;
				index++;
			}
			ft_num_divider(num - ((num / multiplier) * multiplier), arr, power - 1, index + 1);
		}
		else
		{
			arr[index] = 0;
			ft_num_divider(num - ((num / multiplier) * multiplier), arr, power - 1, index + 1);
		}
	}
	else
	{
		arr[index] = num;
	}
}
/*
int main()
{
	int i = 0;
	int arr[16];
	ft_num_divider(1234234234, arr, 9, 0);
	while (i < 16)
	{
		printf("num: %d\n", arr[i]);
		i++;
	}
	return (0);
}
*/
