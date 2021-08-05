/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:04:53 by msanjuan          #+#    #+#             */
/*   Updated: 2021/08/05 15:50:50 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("---------------------------------\n");
	printf("          Tests for %%c          \n");
	printf("---------------------------------\n");
	ft_printf("Test |%c|\n", 'j');
	printf("Vraie fonction : ");
	printf("Test |%c|\n\n", 'j');
	ft_printf("Test |%c|\n", '1');
	printf("Vraie fonction : ");
	printf("Test |%c|\n\n\n", '1');

	printf("---------------------------------\n");
	printf("          Tests for %%%%         \n");
	printf("---------------------------------\n");
	ft_printf("Test |%%|\n");
	printf("Vraie fonction : ");
	printf("Test |%%|\n\n\n");

	printf("---------------------------------\n");
	printf("          Tests for %%s         \n");
	printf("---------------------------------\n");
	char *null_test = NULL;
	ft_printf("Test |%s|\n", null_test);
	printf("Vraie fonction : ");
	printf("Test |%s|\n\n", null_test);
	char *str_test = "réussi";
	ft_printf("Test |%s|\n", str_test);
	printf("Vraie fonction : ");
	printf("Test |%s|\n\n", str_test);
	ft_printf("Test |%s|\n", "Ceci est un test");
	printf("Vraie fonction :");
	printf("Test |%s|\n\n", "Ceci est un test");
	ft_printf("Test str vide |%s|\n", "");
	printf("Vraie fonction : ");
	printf("Test str vide |%s|\n\n", "");
	ft_printf("Test |%s|\n", "The red glint of paint sparkled under the sun. He had dreamed of owning this car since he was ten, and that dream had become a reality less than a year ago. It was his baby and he spent hours caring for it, pampering it, and fondling over it. She knew this all too well, and that's exactly why she had taken a sludge hammer to it.");
	printf("Vraie fonction :");
	printf("Test |%s|\n\n\n", "The red glint of paint sparkled under the sun. He had dreamed of owning this car since he was ten, and that dream had become a reality less than a year ago. It was his baby and he spent hours caring for it, pampering it, and fondling over it. She knew this all too well, and that's exactly why she had taken a sludge hammer to it.");

	printf("---------------------------------\n");
	printf("          Tests for %%d         \n");
	printf("---------------------------------\n");
	int int_test = 0;
	ft_printf("Test %d\n", int_test);
	printf("Vraie fonction : ");
	printf("Test %d\n\n", int_test);
	int int_test2 = 42;
	ft_printf("Test %d\n", int_test2);
	printf("Vraie fonction : ");
	printf("Test %d\n\n", int_test2);
	int int_test0 = -4212242;
	ft_printf("Test %d\n", int_test0);
	printf("Vraie fonction : ");
	printf("Test %d\n\n", int_test0);
	int int_test3 = INT_MIN;
	ft_printf("Test %d\n", int_test3);
	printf("Vraie fonction : ");
	printf("Test %d\n\n", int_test3);
	int int_test4 = INT_MAX;
	ft_printf("Test %d\n", int_test4);
	printf("Vraie fonction : ");
	printf("Test %d\n\n\n", int_test4);

	printf("---------------------------------\n");
	printf("          Tests for %%i         \n");
	printf("---------------------------------\n");
	int int_test5 = 0;
	ft_printf("Test %i\n", int_test5);
	printf("Vraie fonction : ");
	printf("Test %i\n\n", int_test5);
	int int_test6 = 57789;
	ft_printf("Test %i\n", int_test6);
	printf("Vraie fonction : ");
	printf("Test %i\n\n", int_test6);
	int int_test7 = -1;
	ft_printf("Test %i\n", int_test7);
	printf("Vraie fonction : ");
	printf("Test %i\n\n", int_test7);
	int int_test8 = INT_MAX;
	ft_printf("Test %i\n", int_test8);
	printf("Vraie fonction : ");
	printf("Test %i\n\n\n", int_test8);

	printf("---------------------------------\n");
	printf("          Tests for %%u         \n");
	printf("---------------------------------\n");
	unsigned int int_test9 = 0;
	ft_printf("Test %u\n", int_test9);
	printf("Vraie fonction :");
	printf("Test %u\n\n", int_test9);
	unsigned int int_test10 = 4278;
	ft_printf("Test %u\n", int_test10);
	printf("Vraie fonction :");
	printf("Test %d\n\n", int_test10);
	unsigned int int_test12 = UINT_MAX;
	ft_printf("Test %u\n", int_test12);
	printf("Vraie fonction :");
	printf("Test %u\n\n\n", int_test12);

	printf("---------------------------------\n");
	printf("          Tests for %%x         \n");
	printf("---------------------------------\n");
	int int_test13 = 0;
	ft_printf("%d devient %x\n", int_test13, int_test13);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test13, int_test13);
	int int_test14 = 42;
	ft_printf("%d devient %x\n", int_test14, int_test14);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test14, int_test14);
	int int_test17 = -1;
	ft_printf("%d devient %x\n", int_test17, int_test17);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test17, int_test17);
	int int_test18 = 13;
	ft_printf("%d devient %x\n", int_test18, int_test18);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test18, int_test18);
	int int_test19 = 5;
	ft_printf("%d devient %x\n", int_test19, int_test19);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test19, int_test19);
	int int_test15 = INT_MIN;
	ft_printf("%d devient %x\n", int_test15, int_test15);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test15, int_test15);
	int int_test16 = INT_MAX;
	ft_printf("%d devient %x\n", int_test16, int_test16);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test16, int_test16);
	int int_test20 = 501;
	ft_printf("%d devient %x\n", int_test20, int_test20);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test20, int_test20);
	int int_test21 = -178;
	ft_printf("%d devient %x\n", int_test21, int_test21);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n", int_test21, int_test21);
	int int_test22 = 111111;
	ft_printf("%d devient %x\n", int_test22, int_test22);
	printf("Vraie fonction : ");
	printf("%d devient %x\n\n\n", int_test22, int_test22);

	printf("---------------------------------\n");
	printf("          Tests for %%X         \n");
	printf("---------------------------------\n");
	int int_test23 = 0;
	ft_printf("%d devient %X\n", int_test23, int_test23);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test23, int_test23);
	int int_test24 = 42;
	ft_printf("%d devient %X\n", int_test24, int_test24);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test24, int_test24);
	int int_test25 = -1;
	ft_printf("%d devient %X\n", int_test25, int_test25);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test25, int_test25);
	int int_test26 = 13;
	ft_printf("%d devient %X\n", int_test26, int_test26);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test26, int_test26);
	int int_test27 = 5;
	ft_printf("%d devient %X\n", int_test27, int_test27);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test27, int_test27);
	int int_test28 = INT_MIN;
	ft_printf("%d devient %X\n", int_test28, int_test28);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test28, int_test28);
	int int_test29 = INT_MAX;
	ft_printf("%d devient %X\n", int_test29, int_test29);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test29, int_test29);
	int int_test30 = 501;
	ft_printf("%d devient %X\n", int_test30, int_test30);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test30, int_test30);
	int int_test31 = -178;
	ft_printf("%d devient %X\n", int_test31, int_test31);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n", int_test31, int_test31);
	int int_test32 = 111111;
	ft_printf("%d devient %X\n", int_test32, int_test32);
	printf("Vraie fonction : ");
	printf("%d devient %X\n\n\n", int_test32, int_test32);


	printf("---------------------------------\n");
	printf("          Tests for %%p         \n");
	printf("---------------------------------\n");
	char *ptr_test = NULL;
	ft_printf("Test NULL address |%p|\n", ptr_test);
	printf("Vraie fonction : ");
	printf("Test NULL address |%p|\n\n", ptr_test);
	char *test2 = "Test123*";
	char *ptr_test2 = test2;
	ft_printf("Test str address |%p|\n", ptr_test2);
	printf("Vraie fonction : ");
	printf("Test str address |%p|\n\n", ptr_test2);
	int test3 = 1;
	int *ptr_test3 = &test3;
	ft_printf("Test int address |%p|\n", ptr_test3);
	printf("Vraie fonction : ");
	printf("Test int address |%p|\n\n", ptr_test3);
	char test4 = 'a';
	char *ptr_test4 = &test4;
	ft_printf("Test char address |%p|\n", ptr_test4);
	printf("Vraie fonction : ");
	printf("Test char address |%p|\n\n\n", ptr_test4);

	printf("---------------------------------\n");
	printf("       Tests for every flags     \n");
	printf("---------------------------------\n");
	char *phrase;
	phrase = "phrase trop longue lol";
	int count_printf = (ft_printf("Tests d'une longue %s de %c lignes pour \ntester les %d flags %% (ou est-ce %i?), sachant que 42 fait %x (%X)\n\n", phrase, 'x', 9, 10, 42, 42));
	int vrai_printf = (printf("Tests d'une longue %s de %c lignes pour \ntester les %d flags %% (ou est-ce %i?), sachant que 42 fait %x (%X)\n\n", phrase, 'x', 9, 10, 42, 42));
	ft_printf("Compteur de la fausse : %d\n", count_printf);
	printf("Compteur de la vraie : %d\n\n\n", vrai_printf);
	return (0);
}

// int	main(void)
// {
// 	printf(" PRINTF CUSTOM TESTER\n\n");

// 	printf("---------------------------------");
// 	printf("    Tests for handling errors    ");
// 	printf("---------------------------------\nMa fonction :");
// 	// NO SECOND ARGUMENT
// 	ft_printf("%c\n", );
// 	printf("Vraie fonction :");
// 	printf("%c\n", );
// 	printf("---------------------------------\nMa fonction :");
// 	// EMPTY STRING FOR FIRST ARGUMENT
// 	ft_printf("", 1);
// 	printf("Vraie fonction :");
// 	printf("", 1);
// 	printf("---------------------------------\nMa fonction :");
// 	// WRONG FLAG
// 	ft_printf("%r\n", '1');
// 	printf("Vraie fonction :");
// 	printf("%r\n", '1');
// 	printf("---------------------------------");

// 	return (0);
// }