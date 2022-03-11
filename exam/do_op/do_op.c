/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <melihcakay@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:56:49 by mcakay            #+#    #+#             */
/*   Updated: 2022/03/08 23:05:49 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	do_op(char *str1, char op, char *str2)
{
	int	a;
	int	b;
	int	result;

	a = atoi(str1);
	b = atoi(str2);
	if (op == '+')
		result = a + b;
	else if (op == '-')
		result = a - b;
	else if (op == '*')
		result = a * b;
	else if (op == '/')
		result = a / b;
	else if (op == '%')
		result = a % b;
	printf("%d", result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2][0], argv[3]);
	printf("\n");
	return (0);
}
