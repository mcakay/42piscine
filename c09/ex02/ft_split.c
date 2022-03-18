/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:41:54 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/19 00:45:57 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	len(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
			i++;
		else
		{
			count++;
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	int		w_len;
	int		k;

	i = 0;
	j = 0;
	w_len = 0;
	strs = (char **)malloc(sizeof(char *) * (len(str, charset) + 1));
	while (str[i] && j < len(str, charset))
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		i--;
		while (str[++i] && !is_charset(str[i], charset))
			w_len++;
		strs[j] = (char *)malloc(sizeof(char) * (w_len + 1));
		k = 0;
		while (w_len)
			strs[j][k++] = str[i - w_len--];
		strs[j++][k] = '\0';
	}
	return (strs);
}
