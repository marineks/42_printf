/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 06:43:41 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 22:16:28 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//%p L’argument de pointeur void * est imprimé en hexadécimal.
void print_p(va_list arg)
{
    void *temp;
    temp = va_arg(arg, void *);
    ft_putstr_fd("0x", 1);
    ft_putnbr_hexa((uintptr_t)temp, 1);
}