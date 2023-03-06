/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:37:47 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/03/01 15:39:54 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_map(void)
{
    int i;
    int j;
	char c;

    i = 0;
    j = 0;
    while (i < g_num_of_rows)
    {
        while (j < g_width)
        {   
			c = map[i][j];
            write(1, &c, 1);
            j++;
        }
        write(1, '\n', 1);
        i++;
        j = 0;
    }
}

