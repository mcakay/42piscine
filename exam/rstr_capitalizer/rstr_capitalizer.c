/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 02:37:32 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/12 02:47:39 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	rstr_capitalizer(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
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
		str[i] = c;
		i--;
	}
	ft_putstr(str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argc > 1)
		{
			rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
			argc--;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
