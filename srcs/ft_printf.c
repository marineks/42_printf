/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:46:14 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/03 15:38:29 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *args_list, ...)
{
	// Declaration avec va_start, va_arg pour recuperer les arguments
	va_list valst;
	size_t i;

	va_start(valst, args_list);

	// Handle errors
	i = 0;
	while (i < ft_strlen(args_list))
	{
		char temp;
		temp = va_arg(valst, int);
		printf("%c\n", temp);
		i++;
	}
	
	// Parse the arguments
	// NB : faire des if (strchr(args_list, type) == TRUE) pour determiner le 2eme arg de va_arg?
	// parse_arguments(va_arg(valst, int?)); // à chq fois qu'on appelle va_arg on passe à l'arg suivant

	// Print results

	va_end(valst);
	return (0);
}

// int	main(void)
// {
// 	printf("---------------------------------");
// 	printf("          Tests for \%c          ");
// 	printf("---------------------------------\nMa fonction :");
// 	ft_printf("%c\n", 'o');
// 	printf("Vraie fonction :");
// 	printf("%c\n", 'o');
// 	return (0);
// }