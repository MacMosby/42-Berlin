/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:30:07 by johnavar          #+#    #+#             */
/*   Updated: 2023/03/01 16:04:35 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_free_memory(char **map)
{
	int	i;

	i = 0;
	while (i < g_n)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

char	*ft_strdup(char *str)
{
	char			*new;
	unsigned int	i;

	new = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	i = -1;
	if (!new)
		return (0);
	while (str[++i])
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}

char	*ft_realloc(char *str, unsigned int buff)
{
	char			*str_cpy;
	unsigned int	i;

	str_cpy = (char *)malloc(sizeof(char) * buff);
	if (!str_cpy)
		return (0);
	buff /= 2;
	i = 0;
	while (i < buff)
	{
		str_cpy[i] = (str)[i];
		i++;
	}
	free(str);
	return (str_cpy);
}

int	check_map(char **map)
{
	int	i;
	int	j;

	i = -1;
	while (++i < g_n)
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] != g_o || map[i][j] != g_e)
				return (1);
		}
		if (j != g_len)
			return (1);
	}
	return (0);
}

int	ft_mapify(void)
{
	char	**map;

	map = create_map();
	if (!check_map(map))
		return (1);
	ft_square_builder(map);
	ft_print_map(map);
	ft_free_memory(map);
	return (0);
}
