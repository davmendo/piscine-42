/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:31:17 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/22 15:12:49 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci (index - 1) + ft_fibonacci(index - 2));
}
/*
int main(int argc, char **argv)
{
	int	r;
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		r = ft_fibonacci(nb);
		printf("\nFibonacci de %d = %d\n", nb, r);
	}
	else
	{
		printf("\nFibonacci de 8 = %d\n", ft_fibonacci(8));
		printf("Fibonacci de -1 = %d\n", ft_fibonacci(-1));
		printf("Fibonacci de 0 = %d\n\n", ft_fibonacci(0));
	}
}
*/
