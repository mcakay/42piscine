/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 02:15:55 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/12 02:25:46 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (str[i])
	{
		c = str[i];
		if (j && (c >= 'a' && c <= 'z'))
			c -= 32;
		else if (!j && (c >= 'A' && c <= 'Z'))
			c += 32;
		if (c == ' ' || c == '\t')
			j = 1;
		else
			j = 0;
		ft_putchar(c);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argc > 1)
		{
			str_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
			argc--;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
