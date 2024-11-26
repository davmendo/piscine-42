/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:45:43 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/13 22:25:49 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}

int main(void)
{
    int tab[9] = {30, 5, 2, 3, 4, 8, 16, 20, 24};
    int i;

    ft_sort_int_tab(tab, 9);

    for (i = 0; i < 9; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
