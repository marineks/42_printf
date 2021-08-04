/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:01:02 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 07:59:32 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_flags(char flag, va_list args_lst)
{
	if (flag == '%')
		print_percentage();
	else if (flag == 'c')
		print_character(args_lst);
	else if (flag == 's')
		print_string(args_lst);
	else if (flag == 'd')
		print_d(args_lst);
	else if (flag == 'i')
		print_i(args_lst);
	else if (flag == 'u')
		print_u(args_lst);
	// else if (flag == 'p')
	// 	print_p(args_lst);
	else if (flag == 'x')
		print_x(args_lst);
}