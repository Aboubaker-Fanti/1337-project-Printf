/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointerp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 04:43:00 by afanti            #+#    #+#             */
/*   Updated: 2022/11/17 20:28:37 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_recur(unsigned long long d)
{
	int		i;
	char	*s;

	s = "0123456789abcdef";
	i = 0;
	if (d >= 16)
	{
		i += ft_recur(d / 16);
		i += ft_recur(d % 16);
	}
	else
		i += ft_putchar(s[d]);
	return (i);
}

int	ft_pointerp(void *s)
{
	unsigned long long	d;

	d = (unsigned long long)s;
	ft_putstr("0x");
	return (ft_recur(d) + 2);
}
