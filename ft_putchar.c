/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:20:03 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/21 15:20:05 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putchar(char c, int *k)
{
	*k += 1;
	write(1, &c, 1);
}
