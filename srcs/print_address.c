/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 06:43:41 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/07 11:26:43 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hexa_p(uintptr_t n, char *base, int fd)
{
	char res[100];
	int i;
	int j;
	
	i = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return (1);
	} 
	while (n) 
	{
			res[i] = base[n % 16];
			n /= 16;
			i++;
	}
	res[i] = '\0';
	j = ft_strlen(res) - 1;
	while (j >= 0)
		ft_putchar_fd(res[j--], fd);
	return (ft_strlen(res));
}

//%p L’argument de pointeur void * est imprimé en hexadécimal.
int print_p(va_list arg)
{
    void *temp;
	
    temp = va_arg(arg, void *);
    ft_putstr_fd("0x", 1);
		return (ft_putnbr_hexa_p((uintptr_t)temp, "0123456789abcdef", 1) + 2);
}