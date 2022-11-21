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
	if (entier < 0)
	{
		ft_putchar('-');
		entier *= -1;
	}
	ft_convertbase((unsigned long long)entier, 10, k);
}
