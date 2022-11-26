/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:25:16 by afanti            #+#    #+#             */
/*   Updated: 2022/11/16 11:20:25 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalower(unsigned int n)
{
	int		i;
	char	*s;

	s = "0123456789abcdef";
	i = 0;
	if (n >= 16)
	{
		i += ft_hexalower(n / 16);
		i += ft_hexalower(n % 16);
	}
	else
		i += ft_putchar(s[n]);
	return (i);
}
