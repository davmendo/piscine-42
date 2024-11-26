/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:50:38 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/16 16:18:31 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		c = 0;
		while (to_find[c] == str[i + c])
		{
			if (to_find[c + 1] == '\0')
			{
				return (str + i);
			}
			c++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char *argv[])
{
	char str[] = "The Federation";
	char to_find[] = "Fe";

	char *r;

	if (argc == 3)
	{
		printf("\nString: %s\n", argv[1]);
		printf("Sub-string %s\n\n", argv[2]);
		r = ft_strstr(argv[1], argv[2]);
	}
	else
	{
		printf("\nString: %s\n", str);
		printf("Sub-string: %s\n\n", to_find);
		r = ft_strstr(str, to_find);
	}
	if (r != NULL)
	{
	printf("Resultado: %s\n\n", r);
	}
	else
	{
		printf("NULL\n\n");
	}
}
*/
