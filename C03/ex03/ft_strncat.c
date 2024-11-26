/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:40:59 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/16 16:13:05 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	char s1[] = "david", s2[] = "piscine";

	if (argc == 3)
	{
		char dest[200] = "";
		printf("\nargumento 1: %s\n", argv[1]);
		printf("argumento 2 (copiando 3 caracteres): %s\n", argv[2]);
		ft_strncat(dest, argv[1], 30);
		ft_strncat(dest, argv[2], 3);
		printf("\ndestino: %s\n\n", dest);
	}
	else
	{
		ft_strncat(s1, s2, 3);
		printf("\nsrc (copiando 3 caracteres): %s\ndest: %s\n\n", s2, s1);
	}
}
*/
