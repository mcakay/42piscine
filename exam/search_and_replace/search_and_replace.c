/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:23:01 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/08 16:27:24 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *str, char a, char b)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			ft_putchar(b);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	ft_putchar('\n');
	return (0);
}
