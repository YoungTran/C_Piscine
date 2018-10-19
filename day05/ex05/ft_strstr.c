/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:41:32 by ytran             #+#    #+#             */
/*   Updated: 2018/03/20 19:48:33 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int search;
	int remember;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		search = 0;
		if (str[i] == to_find[search])
		{
			remember = i;
			while (str[i] == to_find[search])
			{
				if (to_find[search + 1] == '\0')
					return (&str[remember]);
				search++;
				i++;
			}
			i = remember;
		}
		i++;
	}
	return (0);
}
