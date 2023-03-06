/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_to_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:02:57 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/02/26 23:27:49 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void str_to_struct(char *str, int *line);

int ft_dict_to_struct(char *db)
{
	int	i = 0;
	int 	j = 0;
	int	fd;
	int	ret;
	int	*line;
	char	str[100];
	char	buf[BUF_SIZE]; //static in this case, or dynamically with malloc

	line = 0;
	// OPENING THE FILE
	fd = open(db, O_RDONLY);
	if (fd == -1)
	{
		printf("failure opening the file");
		return (1);
	}
	// printf("%d\n", fd);

	// READING THE FILE
	while ((ret = read(fd, buf, BUF_SIZE))) // sizeof() instead of buf size ?
	{
		buf[ret] = '\0';
		if (ret == -1)
		{
			printf("reading failed");
		}
		printf("buffer: %s\n", buf);
	}
	while (buf[i] != 0)
	{
		j = 0;
		while (buf[i] != '\n' && buf[i] != 0)
		{
			// write(1, &buf[i], 1);
			str[j] = buf[i];
			i++;
			j++;
		}
		str[j] = 0;
		// printf("start\n%s\nend\n", str);	
		// I have one line isolated as a string stored in str
		// here I wanna call the function to work with the string - keep it as a string, struct or array ?
		str_to_struct(str, line);
		// after the function call...
		i++;
		line++;
	}
	buf[ret] = '\0';
	// printf("%s\n", buf);
	// printf("%d\n", ret);

	// CLOSING THE FILE
	if (close(fd) == -1)
	{
		printf("closing failed");
		return (1);
	}
	return (0);
}
