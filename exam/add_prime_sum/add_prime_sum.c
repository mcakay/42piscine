/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 04:18:58 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/11 04:34:05 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 0;
	while (i < nb)
	{
		if (is_prime(i))
			result += i;
		i++;
	}
	result += nb;
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (sign * num);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2 && ft_atoi(argv[1]) > 0)
	{	
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}					
