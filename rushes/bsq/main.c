/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:16:05 by johnavar          #+#    #+#             */
/*   Updated: 2023/03/01 18:46:52 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	g_e;
char	g_o;
char	g_f;
int		g_n;
int		g_len;
char	g_rules[13];
char	*g_str;

char	*set_lines(int fd, char *c)
{
	unsigned int	i;
	unsigned int	buff;

	buff = 16;
	g_str = (char *)malloc(sizeof(char) * buff);
	if (!g_str)
		return (0);
	i = 0;
	while (read(fd, c, 1) && c[0] != 0)
	{
		g_str[i] = c[0];
		if (i + 1 == buff)
		{
			buff *= 2;
			g_str = ft_realloc(g_str, buff);
		}
		i++;
	}
	g_str[i] = '\0';
	return (g_str);
}

void	set_rules(int fd, char *c)
{
	int	i;

	i = 0;
	while (c[0] != '\n' && i < 13)
	{
		read(fd, c, 1);
		g_rules[i++] = c[0];
	}
	g_rules[i] = '\0';
	if (i > 3)
	{
		g_e = g_rules[i - 4];
		g_o = g_rules[i - 3];
		g_f = g_rules[i - 2];
		g_rules[i - 4] = '\0';
		g_n = ft_atoi(g_rules);
		if (g_n < 0 || g_e == g_o || g_e == g_f || g_o == g_f)
			g_n = -1;
	}
}

char	**create_map(void)
{
	int		i;
	int		j;
	int		k;
	char	**map;

	i = -1;
	k = 0;
	map = (char **)malloc(sizeof(char *) * g_n);
	if (!map)
		ft_errors();
	while (++i < g_n)
	{
		j = 0;
		map[i] = (char *)malloc(sizeof(char) * g_len + 1);
		if (!map[i])
			return (0);
		while ((j < g_len && g_str[k] != '\n') && g_str[k] != '\0')
		{
			map[i][j++] = g_str[k++];
		}
		map[i][j] = '\0';
		while (g_str[k] == '\n')
			k++;
	}
	return (map);
}

int	set_matrix(char *path)
{
	int		fd;
	int		i;
	char	c[1];

	i = 0;
	c[0] = ' ';
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (1);
	set_rules(fd, c);
	if (g_n <= 0)
		return (1);
	g_str = set_lines(fd, c);
	if (g_str[0] == 0)
	{
		free(g_str);
		return (1);
	}
	close(fd);
	g_len = ft_strlen_n(g_str);
	if (ft_mapify() == 1)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (ac > i)
	{
		if (set_matrix(av[i]) == 1)
			ft_errors();
		if (i + 1 < ac)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
