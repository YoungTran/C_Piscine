# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/13 16:28:36 by ytran             #+#    #+#              #
#    Updated: 2018/03/14 14:50:44 by ytran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ls -l | awk 'NR % 2 == 1'