/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:15:01 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/03 18:36:56 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_percentage(void)
{
	write(1, "%", 1);
}

void	print_character(va_list arg)
{
	char temp;
	temp = va_arg(arg, int);
	write(1, &temp, 1);
}

void	print_string(va_list arg)
{
	char temp;
	temp = va_arg(arg, int);
	write(1, &temp, 1);
}