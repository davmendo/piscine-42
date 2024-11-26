/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:19:12 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/11 16:52:32 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;

	a = 7;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("Resultado da divisao: %d\nResto: %d\n", a, b);
}
*/
