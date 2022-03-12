/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 05:03:54 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/12 05:23:32 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	pgcd(int a, int b)
{
	int	i;
	int	result;

	i = 2;
	result = 1;
	while (i < a && i < b)
	{
		if (!(a % i) && !(b % i))
		{
			result *= i;
			a /= i;
			b /= i;
		}
		else
			i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
