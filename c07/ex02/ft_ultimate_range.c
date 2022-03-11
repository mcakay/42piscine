/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:18:47 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/09 15:34:33 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}	
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	while (i < size)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (size);
}
