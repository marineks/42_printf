/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 05:58:15 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/07 10:16:55 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_uint(unsigned int n, int fd)
{
	static int count = 0;

	if (n <= 9)
	{
		ft_putchar_fd((n + '0'), fd);
		count++;
	}
	else
	{
		ft_putnbr_uint((n / 10), fd);
		ft_putnbr_uint((n % 10), fd);
	}
	return (count);
}

int ft_putnbr_hexa(long int n, char *base, int fd)
{
	long int nbr;
	char res[100];
	int i;
	int j;
	
	i = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return (1);
	} 
	if (n > 0) 
		nbr = (long int)n;
	else
		nbr = (unsigned int)n;
	while (nbr) 
	{
			res[i] = base[nbr % 16];
			nbr /= 16;
			i++;
	}
	res[i] = '\0';
	j = ft_strlen(res) - 1;
	while (j >= 0)
		ft_putchar_fd(res[j--], fd);
	return (ft_strlen(res));
}

void	ft_putnbr_dec(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n >= 0 && n <= 9)
		ft_putchar_fd((n + '0'), fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_dec((n * -1), fd);
	}
	else if (n >= 0 && n > 9)
	{
		ft_putnbr_dec((n / 10), fd);
		ft_putnbr_dec((n % 10), fd);
	}
}

int	ft_count_dec(int n)
{
	int count = 0;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}	
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_count_uint(unsigned int n)
{
	long int count = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}