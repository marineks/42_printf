/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:01:02 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/07 11:47:03 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_fmt_specifiers(char flag, va_list args_lst)
{
	int	spe_count;

	spe_count = 0;
	if (flag == '%')
		spe_count = print_percentage();
	else if (flag == 'c')
		spe_count = print_character(args_lst);
	else if (flag == 's')
		spe_count = print_string(args_lst);
	else if (flag == 'd')
		spe_count = print_d(args_lst);
	else if (flag == 'i')
		spe_count = print_i(args_lst);
	else if (flag == 'u')
		spe_count = print_u(args_lst);
	else if (flag == 'p')
		spe_count = print_p(args_lst);
	else if (flag == 'x')
		spe_count = print_x(args_lst);
	else if (flag == 'X')
		spe_count = print_upp_x(args_lst);
	return (spe_count);
}
