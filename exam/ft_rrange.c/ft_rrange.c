/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:37:59 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/11 22:58:29 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (ft_abs(start - end) + 1));
	if (start < end)
	{
		while (start < end)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else if (start > end)
	{
		while (start > end)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	tab[i] = end;
	return (tab);
}
