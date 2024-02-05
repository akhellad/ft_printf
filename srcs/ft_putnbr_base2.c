/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <akhellad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:26:30 by akhellad          #+#    #+#             */
/*   Updated: 2024/02/05 11:53:51 by akhellad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base2(unsigned long long nbr, unsigned long long base, int *k)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (nbr >= base)
		ft_putnbr_base2(nbr / base, base, k);
	ft_putchar(str[nbr % base], k);
}
