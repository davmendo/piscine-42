/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:01:59 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/13 21:15:28 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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

	char src[] = "aBcD12345";
	r = ft_str_is_printable(src);
	printf("\n%s\nResultado: %d\n", src, r);

	char src1[] = "./?']~[:;>,<|!@#$%&*()_+=-{}`";
	r = ft_str_is_printable(src);
	printf("\n%s\nResultado: %d\n", src1, r);

	char src2[] = "";
	r = ft_str_is_printable(src);
	printf("\nVazio:\n%s\nResultado: %d\n\n", src2, r);
}
*/
