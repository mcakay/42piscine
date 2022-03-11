/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:45:49 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/09 19:04:32 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				largest_num;

	i = 0;
	largest_num = 0;
	if (!len)
		return (0);
	while (i < len)
	{
		if (tab[i] > largest_num)
			largest_num = tab[i];
		i++;
	}
	return (largest_num);
}

int	main(void)
{
	int	tab[4];

	tab[0] = 4;
	tab[1] = 21;
	tab[2] = 42;
	tab[3] = 36;
	printf("largest number: %d\n", max(tab, 4));
	return (0);
}
