/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 05:58:15 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/05 13:26:22 by msanjuan         ###   ########.fr       */
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
// 	long int nbr;
// 	int len;

// 	base = "0123456789abcdef";
// 	len = ft_strlen(base);
// 	nbr = (long int)n;
// 	if (nbr < 0)
// 	{
// 		nbr = (unsigned int)n;
// 		ft_putnbr_hexa(base[nbr / 16], fd);
// 	}
// 	else
// 	{
// 		if (nbr >= len)
// 		{
// 			ft_putnbr_hexa(base[nbr / 16], fd);
// 			ft_putchar_fd(base[nbr % 16], fd);
// 			nbr /= 16;
// 		}
// 		else
// 		{
// 			ft_putchar_fd(base[nbr % 16], fd);
// 			nbr /= 16;
// 		}
// 	}
// // }
// void ft_putnbr_hexa(int n, int fd)
// {
// 	char *base;
// 	long int nbr;
	
// 	base = "0123456789abcdef";
// 	nbr = (long int)n;
// 	if (nbr == 0) 
// 	{
// 		ft_putchar_fd('0', fd);
// 	}
// 	if (nbr > 0) {
// 		while (nbr) 
// 		{
// 			ft_putchar_fd(base[nbr % 16], fd);
// 			nbr /= 16;
// 		}
// 	}
// 	else 
// 	{
// 		unsigned int num = n;
// 		while (num) 
// 		{
// 			ft_putchar_fd(base[num % 16], fd);
// 			num /= 16;
// 		}
// 	}
// }

void ft_putnbr_hexa(int n, int fd)
{
	char *base;
	long int nbr;
	char res[13];
	int i;
	int j;
	
	base = "0123456789abcdef";
	nbr = (long int)n;
	i = 0;
	if (!nbr) 
		ft_putchar_fd('0', fd);
	if (nbr > 0) {
		while (nbr) 
		{
			res[i] = base[nbr % 16];
			nbr /= 16;
			i++;
		}
	}
	else 
	{
		unsigned int num = n;
		while (num) 
		{
			res[i] = base[num % 16];
			num /= 16;
			i++;
		}
	}
	res[i] = '\0';
	j = ft_strlen(res) - 1;
	while (j >= 0)
	{
		ft_putchar_fd(res[j], fd);
		j--;
	}
}