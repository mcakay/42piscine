/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:29:47 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/11 21:05:53 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	c;

	i = 8;
	c = 0;
	while (i > 0)
	{
		c = c * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", reverse_bits(atoi(argv[1])));
	printf("\n");
	return (0);
}
