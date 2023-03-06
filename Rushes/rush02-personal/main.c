/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:56:17 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/26 23:25:13 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_atoi_nbr(char *str);
int *ft_num_divider(unsigned int num, int power, int index);
int ft_dict_to_struct(char *db);

int main(int argc, char **argv)
{
	int	i;
	int	nbr;
	int *array;
	char *num;
	char *db;

	i = 0;
	if (argc == 2)
	{
		num = argv[1];
		db = "numbers.dict";
	}
	else if	(argc == 3)
	{
		num = argv[2];
		db = argv[1];
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while(argv[1][i] != '\0')
	{
		if(argv[1][i] <= '0' || argv[1][i] >= '9')
		{
			write(1, "Error\n", 6);
			return(1);
		}
		i++;
	}
	nbr = ft_atoi_nbr(num); // converting string to integer
	array = ft_num_divider(nbr, 9, 0); // splitting the number into an array of printable strings
	ft_dict_to_struct(db); // this ft needs to modify the struct which is a ptr
	// last step - taking each number from the array and print them






	return (0);
}
