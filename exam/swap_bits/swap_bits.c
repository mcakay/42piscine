/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:08:41 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/12 09:20:54 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(int argc, char **argv)
{
	int				i;
	unsigned char	octet;

	if (argc == 2)
	{
		octet = swap_bits(atoi(argv[1]));
		i = 128;
		while (i > 0)
		{
			if (octet >= i)
			{
				write(1, "1", 1);
				octet %= i;
				i /= 2;
			}
			else
			{
				write(1, "0", 1);
				i /= 2;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
