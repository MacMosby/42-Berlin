/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:47:21 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/26 23:25:48 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HEADERS HERE

// PROTOTYPES HERE


struct Numbers {
    int input;
    char    output[100];
} *dict[32];

int	ft_atoi_nbr(char *str);
char *ft_atoi_str(char *str);
void ft_print_nbr(int num, int *dict);

void str_to_struct(char *str, int *line)
{
	int	i;
	int	j;
	int	num;
	char	nbr[10];
	char	words[100];
	char	*result;
	struct Numbers raw;
	struct Numbers *data;

	data = &raw;
	i = 0;
	j = 0;
	num = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (str[i] != ':') // iterating to the colon
		{
			if (str[i] != ' ') // copying only if not a space
			{
				nbr[j] = str[i];
				j++;
			}
			i++;
		}
		if (str[i] == ':') // finishing the string for the number with NULL character
		{
			i++;
			nbr[j] = '\0';
		}
		j = 0;
		while (str[i] != 0) // iterating to the end of the string - line of the dict
		{
			words[j] = str[i];
			i++;
			j++;
		}
		words[j] = 0; // finishing string for output with NULL character

		num = ft_atoi_nbr(nbr);
		result = ft_atoi_str(words);
		(*data).input = num;
		(*data).output = result;
		dict[line] = data;
	}
	
	i = 0;
    	while (i < 16)
	{
		ft_print_nbr(dict[line].input, dict);
	}

}
