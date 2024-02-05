/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:23:41 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/21 12:26:25 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

void	p_case(va_list ap, int *k)
{
	ft_putchar('0', k);
	ft_putchar('x', k);
	ft_putnbr_base((unsigned long long)va_arg(ap, void *), 16, k);
}

void	printf2(const char s, va_list ap, int *k)
{
	if (s == 'c')
		ft_putchar(va_arg(ap, int), k);
	else if (s == 's')
		ft_putstr(va_arg(ap, char *), k);
	else if (s == 'd' || s == 'i')
		d_case(va_arg(ap, int), k);
	else if (s == 'u')
		ft_putnbr_base((unsigned long long) \
						va_arg(ap, unsigned int), 10, k);
	else if (s == 'x')
		ft_putnbr_base((unsigned long long) \
						va_arg(ap, unsigned int), 16, k);
}

void	printf3(const char s, va_list ap, int *k)
{
	if (s == 'X')
		ft_putnbr_base2((unsigned long long) \
		va_arg(ap, unsigned int), 16, k);
	else if (s == 'p')
		p_case(ap, k);
	else if (s == '%')
		ft_putchar('%', k);
}

void	printf4(const char s, va_list ap, int *k)
{
	if (s == 'c' || s == 's' || s == 'd' || s == 'i' || s == 'u' || s == 'x')
		printf2(s, ap, k);
	else if (s == 'X' || s == 'p' || s == '%')
		printf3(s, ap, k);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (write(1, NULL, 0))
		return (-1);
	va_start (ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i ++;
			printf4(str[i], ap, &a);
			i ++;
		}
		else
		{
			ft_putchar(str[i], &a);
			i ++;
		}
	}
	va_end(ap);
	return (a);
}

/*int main()
{
    int a = 115678;
	ft_printf(" %s\n", (char *)NULL);
	printf(" %s\n",(char *)NULL);
    return 0;
}*/
