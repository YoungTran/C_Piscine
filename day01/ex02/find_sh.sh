# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/13 15:07:39 by ytran             #+#    #+#              #
#    Updated: 2018/03/14 15:05:56 by ytran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find * -name "*.sh" | sed 's/.sh$//g' 
