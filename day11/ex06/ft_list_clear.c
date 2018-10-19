/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:12:06 by ytran             #+#    #+#             */
/*   Updated: 2018/03/28 22:13:35 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*tmp;

	elem = *begin_list;
	if (!elem)
		return ;
	while (elem)
	{
		tmp = elem;
		free(elem);
		elem = tmp->next;
	}
	*begin_list = 0;
}
