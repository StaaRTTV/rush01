/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_square_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:38:17 by fabida-s          #+#    #+#             */
/*   Updated: 2024/09/14 18:05:28 by fabida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

//int	parse_input(char *str, int *tab, int size);

// Array tab has side*side elements.
// Prints every side on a different line.
void	print_square_tab(int *tab, int side)
{
	char	c;
	int		i;
	int		j;

	j = 0;
	while (j < side)
	{
		i = 0;
		while (i < side)
		{
			c = tab[j * side + i] + '0';
			write(1, &c, 1);
			if (i != side - 1)
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

/*
int	main(void)
{
	char str1[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char str2[] = "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1";

	int side = 4;
	int t1[16];
	int t2[16];

	parse_input(str1, t1, side*side);
	parse_input(str2, t2, side*side);

	print_square_tab(t1, side);
	write(1, "\n", 1);
	print_square_tab(t2, side);

	return 0;
}
*/
