/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:09:59 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/16 16:11:56 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	char s1[100] = "dav", s2[100] = "mendo";
	if(argc == 3)
	{
		char dest[200] = "";
		printf("\nargumento 1: %s\n", argv[1]);
		printf("argumento 2: %s\n", argv[2]);
		ft_strcat(dest, argv[1]);
		ft_strcat(dest, argv[2]);
		printf("\ndestino: %s\n\n", dest);
	}
	else
	{
		ft_strcat(s1, s2);
		printf("\nsrc: %s\ndest: %s\n\n", s2, s1); 
	}
}
*/
