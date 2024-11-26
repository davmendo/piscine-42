/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:17:56 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/22 12:01:49 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
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
		r = ft_recursive_power(nb, power);
		printf("\n%d^%d = %d", nb, power, r);
	}
	else
	{
		printf("\n3^4 = %d\n", ft_recursive_power(3, 4 ));

                printf("0^0 = %d\n", ft_recursive_power(0, 0 ));

                printf("-4^-4 = %d\n\n", ft_recursive_power(-4, -4 ));
	}
}
*/
