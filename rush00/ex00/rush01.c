/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 22:39:54 by smonroe           #+#    #+#             */
/*   Updated: 2018/03/18 22:40:48 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    rush(int x, int y)
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
                ft_putchar('/');
            if ((i == x && j == 1 && x != 1) || (i == 1 && j == y && y != 1))
                ft_putchar('\\');
            if ((i > 1 && i < x) && (j == 1 || j == y))
                ft_putchar('*');
            if ((j > 1 && j < y) && (i == 1 || i == x))
                ft_putchar('*');
            else if ((j > 1 && x > 1) && (j < y && i < x))
                ft_putchar(' ');
            i++;
        }
        ft_putchar('\n');
        j++;
    }
}
