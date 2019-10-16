# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahola <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/28 16:53:54 by mahola            #+#    #+#              #
#    Updated: 2019/09/04 20:53:49 by mahola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC_DIR = srcs
HDR_DIR = includes
SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/ft_read.c \
		  $(SRC_DIR)/ft_func.c $(SRC_DIR)/ft_check.c \
		  $(SRC_DIR)/ft_error.c
OBJECTS = main.o ft_read.o ft_func.o ft_check.o ft_error.o
FLAGS = -Wall -Wextra -Werror -I$(HDR_DIR)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCES)
	gcc $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
