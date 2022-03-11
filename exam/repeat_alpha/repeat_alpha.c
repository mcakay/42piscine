/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 03:32:55 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/08 03:47:24 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{	
		j = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			j = str[i] - 96;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			j = str[i] - 64;
		while (j > 0)
		{
			ft_putchar(str[i]);
			j--;
		}
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
