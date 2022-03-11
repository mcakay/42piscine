/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 23:45:39 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/10 02:53:58 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_length(char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (strs[i])
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (i - 1);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	char	*str;
	int		len;
	int		i;

	if (!size)
	{
		str = 0;
		return (0);
	}
	len = total_length(strs, sep);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	i = 0;
	while (strs[i])
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}
