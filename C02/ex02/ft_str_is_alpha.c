/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:03:53 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/14 15:45:51 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

	char str[] = "AbCdEfGhI";
	r = ft_str_is_alpha(str);
	printf("\n%s\nResultado:%d\n\n", str, r);

	char str1[] = "0123456789";
	r = ft_str_is_alpha(str1);
	printf("%s\nResultado:%d\n\n", str1, r);
}
*/
