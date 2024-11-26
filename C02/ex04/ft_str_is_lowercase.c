/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:40:03 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/24 21:22:34 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int	r;

	char src[] = "abcdefg";
	r = ft_str_is_lowercase(src);
	printf("\n%s\nResultado: %d\n", src, r);

	char src1[] = "AbCdEfG";
	r = ft_str_is_lowercase(src1);
	printf("\n%s\nResultado:%d\n", src1, r);

	char src2[] = "";
	r = ft_str_is_lowercase(src2);
	printf("\nVazio:\n%s\nResultado:%d\n\n", src2, r);
}
