/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 06:43:41 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/07 09:35:02 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//%p L’argument de pointeur void * est imprimé en hexadécimal.
int print_p(va_list arg)
{
    void *temp;
	
    temp = va_arg(arg, void *);
    ft_putstr_fd("0x", 1);
		return (ft_putnbr_hexa((long int)temp, "0123456789abcdef", 1) + 2);
}