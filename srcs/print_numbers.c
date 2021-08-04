/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 04:42:11 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 04:43:28 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %d imprime un nombre décimal (base 10)
void	print_d(va_list arg)
{
	char temp;
	temp = va_arg(arg, int);
	ft_putchar_fd(temp, 1);
}