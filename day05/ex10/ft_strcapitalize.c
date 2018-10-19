/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:51:47 by ytran             #+#    #+#             */
/*   Updated: 2018/03/20 13:36:15 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0)
			|| ((str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
