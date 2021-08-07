/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:02:39 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/07 11:29:46 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

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
int		parse_format_specifiers(char flag, va_list args_lst);
// PRINT CHARACTERS.C
int		print_percentage(void);
int		print_character(va_list arg);
int		print_string(va_list arg);
// PRINT NUMBERS.C
int		print_d(va_list arg);
int		print_i(va_list arg);
int		print_u(va_list arg);
int		print_x(va_list arg);
int		print_upp_x(va_list arg);
// PRINT ADDRESS.C
int		print_p(va_list arg);
int		ft_putnbr_hexa_p(uintptr_t n, char *base, int fd);
// FT_PRINTF_UTILS.C
int		ft_putnbr_uint(unsigned int n, int fd);
int		ft_putnbr_hexa(long int n, char *base, int fd);
void	ft_putnbr_dec(int n, int fd);
int		ft_count_dec(int n);
int		ft_count_uint(unsigned int n);
#endif