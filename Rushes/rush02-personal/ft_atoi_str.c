/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:09:02 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/26 23:18:41 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_atoi_str(char *str)
{
    int	i;
	int	j;
    char	*result = 0;

    i = 0;
	j = 0;
    while (str[i] == 32)
    {
        i++;
    }
    while (str[i] != '\0')
    {
		if (!(str[i] == 32 && str[i - 1] == 32))
		{
        	result[j] = str[i];
			j++;
		}
		i++;	
    }
    result[j] = '\0';
    return (result);
}
/*
int main()
{
    char *str = "   f    h    ---+--+12i3409ab567";
    char* result;

    result = ft_atoi_str(str);
    printf("%s", str);
	printf("%s", result);
    return (0);
}
*/
