/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:16:31 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/16 21:23:09 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("\n%s\n", argv[1]);
		printf("Resultado: %d\n\n", ft_strlen(argv[1]));
	}
	else
	{
	char str[] = "Piscine";
	int r = ft_strlen(str);
	printf("\nString: %s\nQuantidade de caracteres: %d\n\n", str, r);
	}
}
*/
