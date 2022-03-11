/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 21:33:42 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/08 23:17:01 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int number)
{
	if (number >= 10)
	{
		write_number(number / 10);
		write_number(number % 10);
	}
	else
	{
		number += 48;
		write(1, &number, 1);
	}
}	

void	fizzbuzz(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (!(number % 3) && !(number % 5))
			write(1, "fizzbuzz", 8);
		else if (!(number % 3))
			write(1, "fizz", 4);
		else if (!(number % 5))
			write(1, "buzz", 4);
		else
			write_number(number);
		write(1, "\n", 1);
		number++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
