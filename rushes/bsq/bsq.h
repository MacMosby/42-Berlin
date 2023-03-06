/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:21:52 by johnavar          #+#    #+#             */
/*   Updated: 2023/03/01 22:10:58 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

extern char	g_e;
extern char	g_o;
extern char	g_f;
extern int	g_len;
extern char	g_rules[13];
extern int	g_n;
extern char	*g_str;
extern int	g_max_row;
extern int	g_max_col;
extern int	g_max_size;
void	ft_putstr(char *str);
void	ft_errors(void);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_strlen_n(char *str);
char	*ft_realloc(char *str, unsigned int buff);
int		check_map(char **map);
void	ft_square_builder(char **map);
int		ft_find_max_range(int row, int col, char **map);
int		is_range_possible(int row, int col, int range, char **map);
void	ft_write_fulls(int row, int col, int range, char **map);
void	ft_print_map(char **map);
int		input(void);
char	*get_input(char *c);
void	set_rules_i(char *c);
char	*set_lines_i(char *c);
char	**create_map(void);
void	ft_free_memory(char **map);
char	*ft_strdup(char *str);
int		ft_mapify(void);

#endif
