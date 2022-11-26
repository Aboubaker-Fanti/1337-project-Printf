/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:45:57 by afanti            #+#    #+#             */
/*   Updated: 2022/11/17 15:35:36 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long nn)
{
	int	i;

	i = 0;
	if (nn < 0)
	{
		i = i + ft_putchar('-');
		nn = nn * -1;
	}
	if (nn >= 10)
	{
		i = i + ft_putnbr(nn / 10);
		i = i + ft_putnbr(nn % 10);
	}
	else
		i = i + ft_putchar(nn + '0');
	return (i);
}
