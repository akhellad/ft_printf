/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:26:25 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/22 15:26:27 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_base(unsigned long long nbr, unsigned long long base, int *k)
{
	int		i;
	char	*str;

	i = 0;
	str = "0123456789abcdef";
	if (nbr >= base)
		ft_putnbr_base(nbr / base, base, k);
	ft_putchar(str[nbr % base], k);
}
