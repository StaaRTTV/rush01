/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:37:08 by fabida-s          #+#    #+#             */
/*   Updated: 2024/09/14 18:09:01 by fabida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// delete later
#include <unistd.h>

void	print_error_msg(void);

//TODO
int	main(int argc, char **argv)
{
	if (argc != 2)
		print_error_msg();
	else
		write(1, "ok\n", 3);

	// also return 0 if error?
	return (0);
}
