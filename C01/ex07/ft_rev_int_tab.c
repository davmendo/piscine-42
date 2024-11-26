/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:45:42 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/11 22:56:27 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
/*
#include <stdio.h>

int		main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	int	i;

	ft_rev_int_tab(tab, size);
	
	for (i= 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	return (0);
}
*/
