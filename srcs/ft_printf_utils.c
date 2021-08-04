/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 05:58:15 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 22:18:03 by marine           ###   ########.fr       */
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

// void ft_putnbr_hexa(int n, int fd)
// {
// 	char *base;
// 	// long long int nbr;
// 	int len;

// 	base = "0123456789abcdef";
// 	len = ft_strlen(base);
// 	// nbr = (long long int)n;
// 	if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		n = -n;
// 	}
// 	if (n > len)
// 	{
// 		ft_putnbr_hexa(base[n / 16], fd);
// 		ft_putchar_fd(base[n % 16], fd);
// 	}
// 	else
// 	{
// 		ft_putchar_fd(base[n % 16], fd);
// 	}
// }

// void ft_putnbr_hexa(int n, int fd)
// {
// 	char *base;
// 	unsigned long int nbr;

// 	base = "0123456789abcdef";
// 	nbr = (unsigned long int)n;
// 	if (n == 0)
// 		ft_putchar_fd('0', fd);
// 	if (n > 0)
// 	{
// 		while (n != 0)
// 		{
// 			ft_putchar_fd(base[n % 16], fd);
// 			n /= 16;
// 		}
// 	}
// 	else
// 	{
// 		while (nbr != 0)
// 		{
// 			ft_putchar_fd(base[n % 16], fd);
// 			nbr = nbr / 16;
// 		}
// 	}
// }

void ft_putnbr_hexa(int n, int fd)
{
	char store_value[20];
	int temp;
	int i;
	int j;

	i = 0;
	if (n == INT_MIN)
		ft_putstr_fd("80000000", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n < 0)
		{
			store_value[i] = '-';
			n = -n;
		}
		while (n != 0)
		{
			temp = n % 16;
			if (temp < 10)
			{
				store_value[i] = temp + 48;
				i++;
			}
			else
			{
				store_value[i] = temp + 87;
				i++;
			}
			n = n / 16;
		}
		j = i - 1;
		if (store_value[0] == '-')
			ft_putchar_fd(store_value[0], fd);
		while (j >= 0 && store_value[j] != '-')
		{
			ft_putchar_fd(store_value[j], fd);
			j--;
		}
	}
}
