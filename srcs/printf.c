/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:46:14 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/02 16:56:52 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *args_list, ...)
{
	// Declaration avec va_start, va_arg pour recuperer les arguments
	va_list valst;
	int i;

	va_start(valst, args_list);

	// Handle errors
	i = 0;
	while (i < ft_strlen(args_list))
	{
		error_handler(args_list);
		i++;
	}
	
	// Parse the arguments
	// NB : faire des if (strchr(args_list, type) == TRUE) pour determiner le 2eme arg de va_arg?
	parse_arguments(va_arg(valst, int?)); // à chq fois qu'on appelle va_arg on passe à l'arg suivant

	// Print results

	va_end(valst);
	return (0);
}
