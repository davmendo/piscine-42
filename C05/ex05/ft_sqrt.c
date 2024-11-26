/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:42:56 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/22 17:10:01 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (r * r < nb)
	{
		r++;
	}
	if (r * r == nb)
	{
		return (r);
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	int	nb;
	int	r;

	if ( argc == 2)
	{
		nb = atoi(argv[1]);
		r = ft_sqrt(nb);
		printf("\n√%d = %d", nb, r);
	}
	else
	{
		printf("\n√10 = %d\n", ft_sqrt(100));
		printf("√42 = %d\n", ft_sqrt(42));
		printf("√0 = %d\n", ft_sqrt(0));
		printf("√-1 = %d\n\n", ft_sqrt(-1));
	}
}
*/
