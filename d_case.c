/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:19:01 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/21 15:19:03 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	d_case(int entier, int *k)
{
	if (entier == -2147483648)
	{
		ft_putstr("-2147483648", k);
	}
	else if (entier < 0)
	{
		ft_putchar('-', k);
		entier *= -1;
		ft_putnbr_base((unsigned long long)entier, 10, k);
	}
	else if (entier == 0)
		ft_putchar('0', k);
	else
		ft_putnbr_base((unsigned long long)entier, 10, k);
}
