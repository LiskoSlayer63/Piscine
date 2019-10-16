# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahola <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/28 16:53:54 by mahola            #+#    #+#              #
#    Updated: 2019/09/01 21:16:23 by mahola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC_DIR = srcs
HDR_DIR = includes
SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/ft_putall.c \
		  $(SRC_DIR)/ft_read.c $(SRC_DIR)/ft_row.c \
		  $(SRC_DIR)/ft_str.c $(SRC_DIR)/ft_rush00.c \
		  $(SRC_DIR)/ft_rush01.c $(SRC_DIR)/ft_rush02.c \
		  $(SRC_DIR)/ft_rush03.c $(SRC_DIR)/ft_rush04.c \
		  $(SRC_DIR)/ft_determine.c 
OBJECTS = main.o ft_putall.o ft_read.o ft_row.o ft_str.o \
		  ft_rush00.o ft_rush01.o ft_rush02.o ft_rush03.o \
		  ft_rush04.o ft_determine.o 
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
