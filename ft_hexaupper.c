/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:31:51 by afanti            #+#    #+#             */
/*   Updated: 2022/11/16 11:20:33 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaupper(unsigned int n)
{
	int		i;
	char	*s;

	s = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
	{
		i += ft_hexaupper(n / 16);
		i += ft_hexaupper(n % 16);
	}
	else
		i += ft_putchar(s[n]);
	return (i);
}
