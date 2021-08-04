/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:01:02 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 03:14:50 by msanjuan         ###   ########.fr       */
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
}