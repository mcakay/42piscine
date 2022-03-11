/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:19:41 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/07 22:46:57 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int j, int x)
{
	while (j <= x)
	{
		if (j == 1)
			ft_putchar('A');
		else if (j == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		j++;
	}
}

void	last_line(int j, int x)
{
	while (j <= x)
	{
		if (j == 1)
			ft_putchar('C');
		else if (j == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		j++;
	}
}

void	other_line(int j, int x)
{
	while (j <= x)
	{
		if (j == 1)
			ft_putchar('B');
		else if (j == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		if (i == 1)
			first_line(j, x);
		else if (i == y)
			last_line(j, x);
		else
			other_line(j, x);
		ft_putchar('\n');
		i++;
	}
}
