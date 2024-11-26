/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:51:57 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/13 20:58:52 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	r;

	char src[] = "ABCDEFGH";
	r = ft_str_is_uppercase(src);
	printf("\n%s\nResultado: %d\n", src, r);

	char src1[] = "aBcdeFg";
	r = ft_str_is_uppercase(src1);
	printf("\n%s\nResultado: %d\n", src1, r);

	char src2[] = "";
	r = ft_str_is_uppercase(src2);
	printf("\nVazio:\n%s\nResultado: %d\n\n", src2, r);
}	
*/
