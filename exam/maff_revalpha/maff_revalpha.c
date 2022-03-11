/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:27:18 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/07 18:29:31 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		if (letter % 2)
			ft_putchar(letter - 32);
		else
			ft_putchar(letter);
		letter--;
	}
	ft_putchar('\n');
	return (0);
}
