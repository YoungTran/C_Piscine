# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    people.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/12 17:13:50 by ytran             #+#    #+#              #
#    Updated: 2018/03/12 17:37:12 by ytran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ldapsearch -LLL -Q "uid=z*" cn | grep cn: | cut -d" " -f 2- | sort -r