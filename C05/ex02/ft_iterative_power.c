/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:22:36 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/21 19:32:47 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}
/*
int	main(int argc, char **argv)
{
	int	r;
	int	nb;
	int	power;

	if (argc == 3)
	{
		nb = atoi(argv[1]);
		power = atoi(argv[2]);
		r = ft_iterative_power(nb, power);
		printf("\n%d^%d = %d", nb, power, r);
	}
	else
	{
		printf("\n3^4 = %d\n", ft_iterative_power(3, 4 ));

		printf("0^0 = %d\n", ft_iterative_power(0, 0 ));

		printf("-4^-4 = %d\n\n", ft_iterative_power(-4, -4 ));
	}
}
*/
