/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:15:01 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 09:47:57 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_percentage(void)
{
	ft_putchar_fd('%', 1);
}

void	print_character(va_list arg)
{
	char temp;
	temp = va_arg(arg, int);
	ft_putchar_fd(temp, 1);
}

void	print_string(va_list arg)
{
	char *temp;

	temp = va_arg(arg, char *);
	if (temp == NULL)
		ft_putstr_fd("(null)", 1);
	else
		ft_putstr_fd(temp, 1);
}