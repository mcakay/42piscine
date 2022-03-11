/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 01:31:52 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/09 01:35:13 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	temp;

	i = 0;
	size = ft_strlen(str) - 1;
	while (i < size)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		i++;
		size--;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strrev(argv[1]));
	printf("\n");
	return (0);
}
