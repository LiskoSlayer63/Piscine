# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahola <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/28 16:53:54 by mahola            #+#    #+#              #
#    Updated: 2019/08/29 04:11:32 by mahola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC_DIR = srcs
HDR_DIR = includes
SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/ft_display_file.c \
		  $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_putstr.c \
		  $(SRC_DIR)/ft_error.c $(SRC_DIR)/ft_read.c \
		  $(SRC_DIR)/ft_puterrchar.c $(SRC_DIR)/ft_puterrstr.c
OBJECTS = main.o ft_display_file.o ft_putchar.o ft_putstr.o \
		  ft_error.o ft_read.o ft_puterrchar.o ft_puterrstr.o
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
