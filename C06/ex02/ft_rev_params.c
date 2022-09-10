/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:56:41 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/09 17:35:12 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	i1;

	if (ac > 1)
	{
		i = ac - 1;
		while (i > 0)
		{
			i1 = 0;
			while (av[i][i1])
			{
				write(1, &av[i][i1], 1);
				i1++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
}
