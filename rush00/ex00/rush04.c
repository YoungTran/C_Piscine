/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:22:32 by cooswold          #+#    #+#             */
/*   Updated: 2018/03/18 21:48:09 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y && x != 1 && y != 1))
				ft_putchar('A');
			if ((i == x && j == 1 && x != 1) || (i == 1 && j == y && y != 1))
				ft_putchar('C');
			if ((i > 1 && i < x) && (j == 1 || j == y))
				ft_putchar('B');
			if ((j > 1 && j < y) && (i == 1 || i == x))
				ft_putchar('B');
			else if ((j > 1 && x > 1) && (j < y && i < x))
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
