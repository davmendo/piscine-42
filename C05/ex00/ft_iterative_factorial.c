/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:47:35 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/21 17:22:12 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		r = r * i;
		i++;
	}
	return (r);
}
/*
int	main(int argc, char **argv)
{
	int	r;
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		r = ft_iterative_factorial(nb);
		printf("\nFatorial de %d = %d\n\n", nb, r);
	}
	else
	{
		r = ft_iterative_factorial(0);
		printf("\nFatorial de 0 = %d\n", r);

		r = ft_iterative_factorial(5);
		printf("Fatorial de 5 = %d\n", r);

		r = ft_iterative_factorial(-3);
		printf("Fatorial de -3 = %d\n\n", r);
	}
}
*/
