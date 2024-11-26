/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:53:18 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/16 20:04:38 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] <= 47)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
int	main(void)
{
	char str[] = "Ola Mundo 42 s1-silve s";
	printf("\nAntes: %s", str);
	ft_strcapitalize(str);
	printf("\nDepois: %s\n\n", str);
}
