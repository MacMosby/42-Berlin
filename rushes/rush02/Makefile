# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkorkmaz <fkorkmaz@stdnt.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 14:21:46 by fkorkmaz          #+#    #+#              #
#    Updated: 2023/02/26 16:04:49 by fkorkmaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = awesomeprog

SRC = source.c

all: $(NAME)

$NAME:
	gcc-o $(NAME) $(SRC)

clean:
	/binrm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
