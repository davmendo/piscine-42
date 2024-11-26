/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:32:07 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/11 15:56:34 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main()
{
	int	a = 20;
	int	b = 42;

	printf("Antes da funcao %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("Depois da funcao %d %d\n", a, b);
}
*/
