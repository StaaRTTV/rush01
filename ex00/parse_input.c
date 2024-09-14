/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:33:37 by fabida-s          #+#    #+#             */
/*   Updated: 2024/09/14 15:32:42 by fabida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Reads the line of integers and fills the int array with them.
// 'size' is the size of the int array tab.
// If there is no error, returns 1.
// Otherwise returns 0.
int	parse_input(char *str, int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && j < size)
	{
		if (i % 2 == 1)
		{
			if (str[i] == ' ')
				i++;
			else
				return (0);
		}
		else if (str[i] <= '4' && str[i] >= '1')
		{
			tab[j] = str[i] - '0';
			j++;
			i++;
		}
		else
			return (0);
	}
	return (str[i] == '\0' && j == size);
}

/*
void	print_tab(int *tab, int size)
{
	int i = 0;

	printf("[");
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("]\n");
}

void	test_parse_input(char *str, int *t, int size)
{
	printf("str = '%s'\n", str);
	if (parse_input(str, t, size))
	{
		printf("t = ");
		print_tab(t, size);
	}
	else
		printf("Error\n");
	printf("\n");
}

int	main(void)
{
	char str1[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char str2[] = "4 3 2a1 1 2 2 2 4 3 2 1 1 2 2 2";
	char str3[] = "4 3 2 5 1 2 2 2 4 3 2 1 1 2 2 2";
	char str4[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2  ";
	char str5[] = " 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char str6[] = "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1";
	char str7[] = "1  1 1 1 1 1 1 1 1 1 1 1 1 1 1 1";
	char str8[] = "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 1";

	int size = 16;
	int t1[16];
	int t2[16];
	int t3[16];
	int t4[16];
	int t5[16];
	int t6[16];
	int t7[16];
	int t8[16];

	// Ok
	test_parse_input(str1, t1, size);

	// error
	test_parse_input(str2, t2, size);

	// error
	test_parse_input(str3, t3, size);

	// error
	test_parse_input(str4, t4, size);

	// error
	test_parse_input(str5, t5, size);

	// Ok
	test_parse_input(str6, t6, size);

	// error
	test_parse_input(str7, t7, size);

	// error
	test_parse_input(str8, t8, size);
	return 0;
}
*/
