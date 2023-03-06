# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 14:43:46 by mrodenbu          #+#    #+#              #
#    Updated: 2023/03/01 18:48:12 by johnavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = main.c ft_lib.c ft_lib2.c ft_print_map.c ft_square_builder.c

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	cc $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all      
