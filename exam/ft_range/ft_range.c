/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:07:39 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/10 22:10:53 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	*ft_range(int start, int end)
{
	
