/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertbase2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:02:15 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/21 15:02:25 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned long long	count2(unsigned long long nbr, \
						unsigned long long base, unsigned long long l_fin)
{
	while (nbr != 0)
	{
		nbr /= base;
		l_fin ++;
	}
	return (l_fin);
}

unsigned long long	ft_convertbase2(unsigned long long nbr \
									, unsigned long long base)
{
	unsigned long long	l_fin;
	unsigned long long	n;
	char				*letter;
	char				*buff;

	l_fin = 0;
	letter = "0123456789ABCDEF";
	l_fin = count2(nbr, base, l_fin);
	n = 0;
	buff = malloc(sizeof(char) * l_fin + 1);
	while (nbr != 0)
	{
		buff[n] = letter[(nbr % base)];
		n ++;
		nbr /= base;
	}
	while (l_fin > 0)
	{
		l_fin --;
		ft_putchar(buff[l_fin]);
	}
	return (n);
}
