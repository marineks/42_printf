/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:02:39 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/04 04:13:45 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define	FT_PRINTF_H
# define	TRUE 0
# define	FALSE 1 

# include "../libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int ft_printf(const char *, ...);
void	parse_flags(char flag, va_list args_lst);
void	print_percentage(void);
void	print_character(va_list arg);
void	print_string(va_list arg);
#endif