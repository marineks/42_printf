/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 05:58:15 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 20:33:25 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_uint(unsigned int n, int fd)
{
	if (n <= 9)
		ft_putchar_fd((n + '0'), fd);
	else
	{
		ft_putnbr_uint((n / 10), fd);
		ft_putnbr_uint((n % 10), fd);
	}
}

void ft_putnbr_hexa(int n, int fd)
{
	char *base;
	// long long int nbr;
	int len;

	base = "0123456789abcdef";
	len = ft_strlen(base);
	// nbr = (long long int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= len)
	{
		ft_putnbr_hexa(base[n / len], fd);
		ft_putnbr_hexa(base[n % len], fd);
	}
	else
	{
		ft_putchar_fd(base[n % len], fd);
	}
}