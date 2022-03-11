/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:36:52 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/09 18:25:28 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n < 2)
		return (0);
	while (n >= 2)
	{
		if (n % 2)
			return (0);
		n /= 2;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", is_power_of_2(atoi(argv[1])));
	printf("\n");
	return (0);
}
