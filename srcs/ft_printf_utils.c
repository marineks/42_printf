/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 05:58:15 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/05 16:12:37 by msanjuan         ###   ########.fr       */
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

void ft_putnbr_hexa(long int n, char *base, int fd)
{
	long int nbr;
	char res[100];
	int i;
	int j;
	
	i = 0;
	if (n == 0) 
		ft_putchar_fd('0', fd);
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
}

