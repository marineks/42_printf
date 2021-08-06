/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:15:01 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/05 17:48:52 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_percentage(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	print_character(va_list arg)
{
	char temp;
	temp = va_arg(arg, int);
	ft_putchar_fd(temp, 1);
	return (1);
}

int	print_string(va_list arg)
{
	char *temp;
	int count;

	count = 0;
	temp = va_arg(arg, char *);
	if (temp == NULL)
		ft_putstr_fd("(null)", 1);
	else
		ft_putstr_fd(temp, 1);
	if (temp == NULL)
		return (6);
	else 
		count = ft_strlen(temp);
	return (count);
}