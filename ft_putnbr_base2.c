/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:26:30 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/22 15:26:33 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_base2(unsigned long long nbr, unsigned long long base, int *k)
{
	int		i;
	char	*str;

	i = 0;
	str = "0123456789ABCDEF";
	if (nbr >= base)
		ft_putnbr_base2(nbr / base, base, k);
	ft_putchar(str[nbr % base], k);
}
