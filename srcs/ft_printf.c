/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:46:14 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 04:35:48 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *flag_lst, ...)
{
	// Declaration avec va_start, va_arg pour recuperer les arguments
	va_list args_lst;
	size_t i;

	va_start(args_lst, flag_lst);

	// Handle errors
	// à faire

	// Parse the arguments
	i = 0;
	while (flag_lst[i])
	{
		if (flag_lst[i] == '%')
		{
			parse_flags(flag_lst[i + 1], args_lst);
			i++;
		} 
		else 
			write(1, &(flag_lst[i]), 1);
		i++;
	}
	write(1, "\n", 1);
	va_end(args_lst);
	return (0);
}
