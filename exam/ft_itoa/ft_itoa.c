/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:43:23 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/10 19:53:36 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	size_calc(long nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		nb *= -1;
		counter++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		counter++;
	}
	counter++;
	return (counter);
}

void	convert_number(long nb, char *c, int *i)
{
	if (nb < 0)
	{
		nb *= -1;
		*c = '-';
		*i += 1;
	}
	if (nb >= 10)
	{
		convert_number(nb / 10, c, i);
		convert_number(nb % 10, c, i);
	}
	else
	{
		*(c + *i) = nb + '0';
		*i += 1;
	}
}

char	*ft_itoa(int nbr)
{
	long	nb;
	char	*str;
	int		size;
	int		i;

	i = 0;
	nb = nbr;
	size = size_calc(nb);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (0);
	convert_number(nb, &str[i], &i);
	str[i] = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_itoa(atoi(argv[1])));
	printf("\n");
	return (0);
}
