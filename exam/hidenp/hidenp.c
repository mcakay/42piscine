/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 06:33:47 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/12 06:45:14 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (s2[j])
	{
		if (s1[i] == s2[j])
		{
			i++;
			counter++;
		}
		j++;
	}
	if (ft_strlen(s1) == counter)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}					
