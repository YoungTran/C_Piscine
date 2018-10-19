# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 22:29:36 by ytran             #+#    #+#              #
#    Updated: 2018/03/27 20:50:25 by ytran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = do_op

OUT = do-op

SRC = main.c operations.c

all: $(PROGRAM)

$(PROGRAM):
	gcc -Wall -Wextra -Werror $(SRC) -o $(OUT)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(OUT)

re: fclean all
