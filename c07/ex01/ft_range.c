/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:51:37 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/09 15:18:21 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*tab;
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
