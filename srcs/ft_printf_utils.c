/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 05:58:15 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/06 11:53:38 by msanjuan         ###   ########.fr       */
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

int	ftt_putnbr_fd(int n, int fd)
{
	static int count = 0;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (11);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_fd((n + '0'), fd);
		count++;
	}	
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		count++;
		ftt_putnbr_fd((n * -1), fd);
	}
	else if (n >= 0 && n > 9)
	{
		ftt_putnbr_fd((n / 10), fd);
		ftt_putnbr_fd((n % 10), fd);
	}
	return (count);
}