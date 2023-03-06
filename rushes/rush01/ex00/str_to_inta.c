/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_inta.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:27:42 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/19 23:17:33 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	inta_builder(char *str, int *views_array)
{
	int	n;
	int	index;
	int	check;	

	check = 0;
	index = 0;
	while (str[check] != '\0')
	{
		if (check % 2 != 0 && str[check] != ' ')
		{
			return (0);
		}
		if (str[check] >= '1' && str[check] <= '4')
		{
			n = str[check] - '0';
			views_array[index] = n;
			index++;
		}
		check++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "2 2 1 3 1 2 3 2 2 2 4 1 2 2 1 4";
	int	views[16];
	int result;
	result = inta_builder(str, views);
	printf("result %d\n", result);
	int i = 0;
	while (i < 16)
	{
		printf("%d", views[i]);
		i++;
	}

}*/
