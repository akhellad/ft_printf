/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertbase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:53:55 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/21 14:53:59 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned long long	count(unsigned long long nbr, \
						unsigned long long base, unsigned long long l_fin)
{
	while (nbr != 0)
	{
		nbr /= base;
		l_fin ++;
	}
	return (l_fin);
}

unsigned long long	ft_convertbase(unsigned long long nbr \
									, unsigned long long base, int *k)
{
	unsigned long long	l_fin;
	unsigned long long	n;
	char				*letter;
	char				*buff;

	l_fin = 0;
	letter = "0123456789abcdef";
	l_fin = count(nbr, base, l_fin);
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
		*k += 1;
		ft_putchar(buff[l_fin]);
	}
	return (n);
}
