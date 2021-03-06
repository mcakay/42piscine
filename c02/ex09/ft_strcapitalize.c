/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:42:05 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/07 16:58:53 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (str[i])
	{	
		c = str[i];
		if (j && (c >= 'a' && c <= 'z'))
			c -= 32;
		else if (!j && (c >= 'A' && c <= 'Z'))
			c += 32;
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
				|| (c >= '0' && c <= '9')))
			j = 1;
		else
			j = 0;
		str[i] = c;
		i++;
	}
	return (str);
}
