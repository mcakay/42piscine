/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:07:39 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/11 20:44:34 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	*ft_range(int start, int end)
{
	int	i;
	int	*tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (ft_abs(start - end) + 1));
	if (start < end)
	{
		while (start < end)
		{
			tab[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while (start > end)
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	tab[i] = start;
	return (tab);
}
