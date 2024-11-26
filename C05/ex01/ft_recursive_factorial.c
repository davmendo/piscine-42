/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:02:35 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/21 19:31:58 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int	main(int argc, char **argv)
{
	int	r;
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
                r = ft_recursive_factorial(nb);
                printf("\nFatorial de %d = %d\n\n", nb, r);
	}
	else
	{
		r = ft_recursive_factorial(5);
		printf("\nFatorial de 5 = %d\n", r);
		
		r = ft_recursive_factorial(-2);
		printf("Fatorial de -2 = %d\n", r);
		
		r = ft_recursive_factorial(0);
		printf("Fatorial de 0 = %d\n\n", r);
	}
}
*/
