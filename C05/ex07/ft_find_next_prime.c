/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:22:33 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/22 17:13:09 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (1)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
		}
		nb++;
	}
}
/*
int	main(int argc, char **argv)
{
	int	r;
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		r = ft_find_next_prime(nb);
		printf("\nNumero: %d\nSuperior ou igual: %d\n\n", nb, r);
	}
	else
	{
		printf("\nNumero: 42\nSuperior ou igual: %d\n", ft_find_next_prime(42));
		printf("\nNumero: 2\nSuperior ou igual: %d\n", ft_find_next_prime(2));
		printf("\nNumero: 0\nSuperior ou igual: %d\n", ft_find_next_prime(0));
		printf("\nNumero: -1\nSuperior ou igual: %d\n", ft_find_next_prime(-1));
	}
}
*/
