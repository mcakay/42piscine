/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:29:47 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/09 20:48:57 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int			i;
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
