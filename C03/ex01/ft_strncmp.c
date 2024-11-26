/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:09:47 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/17 21:12:44 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n -1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int	main(int argc, char *argv[])
{
	int	r;
	char s1[] = "abcd", s2[] = "c";

	if (argc == 3)
	{
	printf("\nComparando (3 caracteres): %s e %s\n", argv[1], argv[2]);
	printf("Resultado: %d\n\n", ft_strncmp(argv[1], argv[2], 3));
	}
	else
	{
	r = ft_strncmp(s1, s2, 3);
	printf("Comparando (3 caracteres): %s e %s\nResultado: %d\n\n", s1, s2, r);
	}
}
