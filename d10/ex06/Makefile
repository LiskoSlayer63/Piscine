# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahola <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/26 15:29:18 by mahola            #+#    #+#              #
#    Updated: 2019/08/26 20:32:06 by mahola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC_DIR = srcs
HDR_DIR = includes
SOURCES = $(SRC_DIR)/do_op.c $(SRC_DIR)/ft_lib.c \
		  $(SRC_DIR)/ft_operators.c
FLAGS = -Wall -Wextra -Werror -I$(HDR_DIR) -o $(NAME)


all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SOURCES)

clean:
	/bin/rm -f $(NAME)

re: clean all
