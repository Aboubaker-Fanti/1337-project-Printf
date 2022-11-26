/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:20:46 by afanti            #+#    #+#             */
/*   Updated: 2022/11/24 14:15:04 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(char str, va_list print)
{
	int	l;

	l = 0;
	if (str == 'c')
		l += ft_putchar(va_arg(print, int));
	else if (str == 's')
		l += ft_putstr(va_arg(print, char *));
	else if (str == 'd' || str == 'i')
		l += ft_putnbr(va_arg(print, int));
	else if (str == 'u')
		l += ft_unsignedec(va_arg(print, unsigned int));
	else if (str == 'x')
		l += ft_hexalower(va_arg(print, unsigned int));
	else if (str == 'X')
		l += ft_hexaupper(va_arg(print, unsigned int));
	else if (str == 'p')
		l += ft_pointerp(va_arg(print, void *));
	else if (str == '%')
		l += ft_putchar('%');
	return (l);
}

int	ft_printf(const char *str, ...)
{
	va_list	print;
	int		i;
	int		s;

	s = 0;
	i = 0;
	va_start(print, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			continue;
		else if (str[i] == '%')
		{
			s += ft_print(str[i + 1], print);
			i++;
		}
		else
		{
			write (1, &str[i], 1);
			s++;
		}
		i++;
	}
	va_end(print);
	return (s);
}
printf("hello")