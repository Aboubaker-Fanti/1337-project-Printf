/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:45:24 by afanti            #+#    #+#             */
/*   Updated: 2022/11/15 20:08:55 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignedec(unsigned int nn)
{
	int	n;

	n = 0;
	if (nn >= 10)
	{
		n += ft_putnbr(nn / 10);
		n += ft_putnbr(nn % 10);
	}
	else
		n += ft_putchar(nn + '0');
	return (n);
}
