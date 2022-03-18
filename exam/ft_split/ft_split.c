/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 04:38:22 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/19 01:17:31 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	len(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_space(str[i]))
			i++;
		else
		{
			count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**strs;
	int		i;
	int		j;
	int		k;
	int		w_len;

	i = 0;
	j = 0;
	w_len = 0;
	strs = (char **)malloc(sizeof(char *) * (len(str) + 1));
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		i--;
		while (str[++i] && !is_space(str[i]))
			w_len++;
		strs[j] = (char *)malloc(sizeof(char) * (w_len + 1));
		k = 0;
		while (w_len)
			strs[j][k++] = str[i - w_len--];
		strs[j++][k] = '\0';
	}
	return (strs);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**strs;

	i = 0;
	if (argc == 2)
	{
		strs = ft_split(argv[1]);
		while (strs[i])
		{
			printf("%s\n", strs[i]);
			i++;
		}
	}
	return (0);
}
