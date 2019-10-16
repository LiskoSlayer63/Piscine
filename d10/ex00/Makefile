# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahola <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/26 15:29:18 by mahola            #+#    #+#              #
#    Updated: 2019/08/26 17:09:23 by mahola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = srcs
HDR_DIR = includes
SOURCES = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_putstr.c \
		  $(SRC_DIR)/ft_strcmp.c $(SRC_DIR)/ft_strlen.c \
		  $(SRC_DIR)/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Wextra -Werror -c -I$(HDR_DIR)


all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
