/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 04:42:11 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 06:02:30 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %d imprime un nombre décimal (base 10)
void	print_d(va_list arg)
{
	char temp;
	temp = va_arg(arg, int);
	ft_putnbr_fd(temp, 1);
}

//%i imprime un entier en base 10
void	print_i(va_list arg)
{
	char temp;
	temp = va_arg(arg, int);
	ft_putnbr_fd(temp, 1);
}

//%u imprime un nombre décimal non signé (base 10).
void	print_u(va_list arg)
{
	char temp;
	temp = va_arg(arg, unsigned int);
	ft_putnbr_uint(temp, 1);
}