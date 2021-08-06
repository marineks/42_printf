/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:46:14 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/06 12:04:19 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *flag_lst, ...)
{
	// Declaration avec va_start, va_arg pour recuperer les arguments
	va_list args_lst;
	size_t i;
	int count;
	int specifiers_count;

	va_start(args_lst, flag_lst);
	// Parse the arguments
	i = 0;
	count = 0;
	specifiers_count = 0;
	while (flag_lst[i])
	{
		if (flag_lst[i] == '%')
		{
			specifiers_count = parse_format_specifiers(flag_lst[i + 1], args_lst);
			i++;
		} 
		else 
		{
			write(1, &(flag_lst[i]), 1);
			count++;
		}
		i++;
	}
	va_end(args_lst);
	ft_putstr_fd("Compteur de ma fonction : ", 1);
	ft_putnbr_fd(count + specifiers_count, 1);
	ft_putstr_fd("\n", 1);
	return (count + specifiers_count);
}
