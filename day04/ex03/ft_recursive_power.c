/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 15:43:14 by ytran             #+#    #+#             */
/*   Updated: 2018/03/17 21:02:41 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	if (power >= 31)
		return (-1);
	return (nb * ft_recursive_power(nb, power - 1));
}
