/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 06:08:43 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/12 06:21:49 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (j && (str[i] == ' ' || str[i] == '\t'))
		{
			ft_putchar(str[i]);
			j = 0;
		}
		else if (str[i] != ' ' && str[i] != '\t' && str[i])
		{
			ft_putchar(str[i]);
			j = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
