/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:04:53 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/02 17:30:20 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
# define INT_MIN -2147483648
# define INT_MAX +2147483647

int	main(void)
{
	printf(" PRINTF CUSTOM TESTER\n\n");

	printf("---------------------------------");
	printf("    Tests for handling errors    ");
	printf("---------------------------------\nMa fonction :");
	// NO SECOND ARGUMENT
	ft_printf("%c\n", );
	printf("Vraie fonction :");
	printf("%c\n", );
	printf("---------------------------------\nMa fonction :");
	// EMPTY STRING FOR FIRST ARGUMENT
	ft_printf("", 1);
	printf("Vraie fonction :");
	printf("", 1);
	printf("---------------------------------\nMa fonction :");
	// WRONG FLAG
	ft_printf("%r\n", '1');
	printf("Vraie fonction :");
	printf("%r\n", '1');
	printf("---------------------------------");


	printf("---------------------------------");
	printf("          Tests for \%c          ");
	printf("---------------------------------\nMa fonction :");
	ft_printf("%c\n", 'o');
	printf("Vraie fonction :");
	printf("%c\n", 'o');
	printf("---------------------------------\nMa fonction :");
	ft_printf("%c\n", '1');
	printf("Vraie fonction :");
	printf("%c\n", '1');
	printf("---------------------------------");


	printf("---------------------------------");
	printf("          Tests for \%s          ");
	printf("---------------------------------\nMa fonction :");
	ft_printf("%s\n", "");
	printf("Vraie fonction :");
	printf("%s\n", "");
	printf("---------------------------------\nMa fonction :");
	ft_printf("%s\n", "Ceci est un test");
	printf("Vraie fonction :");
	printf("%s\n", "Ceci est un test");
	printf("---------------------------------\nMa fonction :");
	ft_printf("%s\n", "The red glint of paint sparkled under the sun. He had dreamed of owning this car since he was ten, and that dream had become a reality less than a year ago. It was his baby and he spent hours caring for it, pampering it, and fondling over it. She knew this all too well, and that's exactly why she had taken a sludge hammer to it.");
	printf("Vraie fonction :");
	printf("%s\n", "The red glint of paint sparkled under the sun. He had dreamed of owning this car since he was ten, and that dream had become a reality less than a year ago. It was his baby and he spent hours caring for it, pampering it, and fondling over it. She knew this all too well, and that's exactly why she had taken a sludge hammer to it.");
	printf("---------------------------------");


	printf("---------------------------------");
	printf("          Tests for \%p          ");
	printf("---------------------------------\nMa fonction :");
	char *ptr_test = NULL;
	ft_printf("%p\n", ptr_test);
	printf("Vraie fonction :");
	printf("%p\n", ptr_test);
	printf("---------------------------------\nMa fonction :");
	char *test2 = "Test123*";
	char *ptr_test2= &test2;
	ft_printf("%p\n", ptr_test2);
	printf("Vraie fonction :");
	printf("%p\n", ptr_test2);
	printf("---------------------------------\nMa fonction :");
	char *test3 = 1;
	char *ptr_test3= &test3;
	ft_printf("%p\n", ptr_test3);
	printf("Vraie fonction :");
	printf("%p\n", ptr_test3);
	printf("---------------------------------");


	printf("---------------------------------");
	printf("          Tests for \%d          ");
	printf("---------------------------------\nMa fonction :");
	int int_test = 0;
	ft_printf("%d\n", int_test);
	printf("Vraie fonction :");
	printf("%d\n", int_test);
	printf("---------------------------------\nMa fonction :");
	int *int_test2 = 42;
	ft_printf("%d\n", int_test2);
	printf("Vraie fonction :");
	printf("%d\n", int_test2);
	printf("---------------------------------\nMa fonction :");
	int *int_test3 = INT_MIN;
	ft_printf("%d\n", int_test3);
	printf("Vraie fonction :");
	printf("%d\n", int_test3);
	printf("---------------------------------\nMa fonction :");
	int *int_test4 = INT_MAX;
	ft_printf("%d\n", int_test4);
	printf("Vraie fonction :");
	printf("%d\n", int_test4);
	printf("---------------------------------");


	printf("---------------------------------");
	printf("          Tests for \%i          ");
	printf("---------------------------------\nMa fonction :");
	int int_test5 = 0;
	ft_printf("%d\n", int_test);
	printf("Vraie fonction :");
	printf("%d\n", int_test);
	printf("---------------------------------\nMa fonction :");
	int *int_test6 = 42;
	ft_printf("%d\n", int_test2);
	printf("Vraie fonction :");
	printf("%d\n", int_test2);
	printf("---------------------------------\nMa fonction :");
	int *int_test7 = -1;
	ft_printf("%d\n", int_test3);
	printf("Vraie fonction :");
	printf("%d\n", int_test3);
	printf("---------------------------------\nMa fonction :");
	int *int_test8 = INT_MAX;
	ft_printf("%d\n", int_test4);
	printf("Vraie fonction :");
	printf("%d\n", int_test4);
	printf("---------------------------------");

	printf("---------------------------------");
	printf("          Tests for \%u          ");
	printf("---------------------------------\nMa fonction :");
	int int_test5 = 0;
	ft_printf("%d\n", int_test);
	printf("Vraie fonction :");
	printf("%d\n", int_test);
	printf("---------------------------------\nMa fonction :");
	int *int_test6 = 42;
	ft_printf("%d\n", int_test2);
	printf("Vraie fonction :");
	printf("%d\n", int_test2);
	printf("---------------------------------\nMa fonction :");
	int *int_test7 = -1;
	ft_printf("%d\n", int_test3);
	printf("Vraie fonction :");
	printf("%d\n", int_test3);
	printf("---------------------------------\nMa fonction :");
	int *int_test8 = INT_MAX;
	ft_printf("%d\n", int_test4);
	printf("Vraie fonction :");
	printf("%d\n", int_test4);
	printf("---------------------------------");

	return (0);
}