/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:23:52 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/07 18:26:48 by mcakay           ###   ########.fr       */
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

	letter = 'a';
	while (letter <= 'z')
	{
		if (!(letter % 2))
			ft_putchar(letter - 32);
		else
			ft_putchar(letter);
		letter++;
	}
	ft_putchar('\n');
	return (0);
}			
