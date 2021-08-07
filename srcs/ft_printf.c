/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:46:14 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/07 11:38:41 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *flag_lst, ...)
{
	va_list	args_lst;
	size_t	i;
	int		count;
	int		specifiers_count;

	va_start(args_lst, flag_lst);
	i = 0;
	count = 0;
	specifiers_count = 0;
	while (flag_lst[i])
	{
		if (flag_lst[i] == '%')
		{
			specifiers_count += parse_fmt_specifiers(flag_lst[i + 1], args_lst);
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
	return (count + specifiers_count);
}
