/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <akhellad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:26:25 by akhellad          #+#    #+#             */
/*   Updated: 2024/02/05 11:53:13 by akhellad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long long nbr, unsigned long long base, int *k)
{
	char	*str;

	str = "0123456789abcdef";
	if (nbr >= base)
		ft_putnbr_base(nbr / base, base, k);
	ft_putchar(str[nbr % base], k);
}
