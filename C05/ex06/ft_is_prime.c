/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:46:10 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/22 16:09:17 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (0);
	}
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
/*
int	main(int argc, char **argv)
{
	int	r;
	int	nb;
	if (argc == 2)
	{
		nb = atoi(argv[1]);
		r = ft_is_prime(nb);
		printf("\n%d = %d\n\n", nb, r);
	}
	else
	{
		printf("\n42 = %d\n", ft_is_prime(42));
		printf("100 = %d\n", ft_is_prime(101));
		printf("-7 = %d\n", ft_is_prime(-7));
		printf("997 = %d\n\n", ft_is_prime(997));
	}
}
*/
