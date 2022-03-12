/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 05:39:11 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/12 05:52:30 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	print_hex(int nb)
{
	if (nb > 16)
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
	else
		ft_putchar("0123456789abcdef"[nb]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}	
