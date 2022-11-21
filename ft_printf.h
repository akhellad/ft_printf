/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:19:05 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/11 22:19:06 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void				d_case(int entier, int *k);
void				ft_putchar(char c);
int					ft_printf(const char *str, ...);
unsigned long long	ft_convertbase(unsigned long long nbr, \
									unsigned long long base, int *k);
unsigned long long	ft_convertbase2(unsigned long long nbr, \
									unsigned long long base);
void				ft_putchar(char c);
void				ft_putstr(char *s);

#endif
