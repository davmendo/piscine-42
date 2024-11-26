/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:37:13 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/16 16:09:56 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[])
{
	char s1[] = "David", s2[] = "Davi";
	int	r;

	if (argc == 3)
	{
		printf("\nComparando: %s e %s\n", argv[1], argv[2]);
		printf("Resultado: %d\n\n", ft_strcmp(argv[1], argv[2]));
	}
	else
	{
		r = ft_strcmp(s1, s2);
		printf("\nComparando: %s e %s\nResultado:%d\n\n", s1, s2, r);
	}

}
*/
