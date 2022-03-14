/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 03:43:49 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/14 04:00:34 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int nb)
{
	int	i;

	i = 1;
	while (i < nb)
	{
		if (is_prime(i) && !(nb % i))
		{
			printf("%d*", i);
			nb /= i;
		}
		else
			i++;
	}
	printf("%d", i);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
