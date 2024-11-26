/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:19:04 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/14 17:38:02 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	int 	r;

	char src[] = "1234567890";
	r = ft_str_is_numeric(src);
	printf("\n%s\nResultado: %d\n", src, r);

	char src1[] = "AbCdeFg";
	r = ft_str_is_numeric(src1);
	printf("\n%s\nResultado: %d\n", src1, r);

	char src2[] = "";
	r = ft_str_is_numeric(src2);
	printf("\nVazio:\n%s\nResultado: %d\n\n", src2, r);
}
*/
