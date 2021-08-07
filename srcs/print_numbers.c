/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 04:42:11 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/07 11:58:03 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %d imprime un nombre décimal (base 10)
int	print_d(va_list arg)
{
	int	temp;

	temp = va_arg(arg, int);
	ft_putnbr_dec(temp, 1);
	return (ft_count_dec(temp));
}

//%i imprime un entier en base 10
int	print_i(va_list arg)
{
	int	temp;

	temp = va_arg(arg, int);
	ft_putnbr_dec(temp, 1);
	return (ft_count_dec(temp));
}

//%u imprime un nombre décimal non signé (base 10).
int	print_u(va_list arg)
{
	unsigned int	temp;

	temp = va_arg(arg, unsigned int);
	ft_putnbr_uint(temp, 1);
	return (ft_count_uint(temp));
}

//%x imprime un nombre en hexadécimal (base 16)
int	print_x(va_list arg)
{
	int	temp;

	temp = va_arg(arg, int);
	return (ft_putnbr_hexa(temp, "0123456789abcdef", 1));
}

//%x imprime un nombre en hexadécimal (base 16)
int	print_upp_x(va_list arg)
{
	int	temp;

	temp = va_arg(arg, int);
	return (ft_putnbr_hexa(temp, "0123456789ABCDEF", 1));
}
