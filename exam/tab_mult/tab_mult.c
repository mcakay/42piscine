/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 05:24:13 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/12 05:37:45 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num);
}

void	tab_mult(int nb)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(nb * i);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		tab_mult(ft_atoi(argv[1]));
	else
		ft_putchar('\n');
	return (0);
}
