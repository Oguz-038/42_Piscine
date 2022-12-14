/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:24:12 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/14 17:44:20 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	s;
	int	c;

	if (argc > 1)
	{
		s = 1;
		while (s < argc)
		{
			c = 0;
			while (argv[s][c])	
				write(1, &argv[s][c++], 1);
            write(1, "\n", 1);
			s++;
		}
	}
}
