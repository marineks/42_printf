/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:02:39 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/05 14:50:50 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#define TRUE 0
#define FALSE 1

#include "../libft/libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>

// FT_PRINTF.C
int		ft_printf(const char *, ...);
// PARSE.C
void	parse_format_specifiers(char flag, va_list args_lst);
// PRINT CHARACTERS.C
void	print_percentage(void);
void	print_character(va_list arg);
void	print_string(va_list arg);
// PRINT NUMBERS.C
void	print_d(va_list arg);
void	print_i(va_list arg);
void	print_u(va_list arg);
void	print_x(va_list arg);
void	print_upp_x(va_list arg);
// PRINT ADDRESS.C
void	print_p(va_list arg);
// FT_PRINTF_UTILS.C
void	ft_putnbr_uint(unsigned int n, int fd);
void	ft_putnbr_hexa(int n, char *base, int fd);
#endif