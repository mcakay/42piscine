/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:04:33 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/09 21:14:52 by mcakay           ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	wdmatch(char *str1, char *str2)
{
	int	i;
	int	j;
	int	wdlen;

	i = 0;
	j = 0;
	wdlen = 0;
	while (str1[i])
	{
		while (str2[i])
		{
			if (str1[i] == str2[j])
			{
				wdlen++;
				break ;
			}
			j++;
		}
		i++;
	}
	if (wdlen == ft_strlen(str1))
		ft_putstr(str1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
