/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:46:24 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/18 15:41:05 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdio.h>

int main(void)
{
	char	str[] = "davmendo";
	int	l;

	l = ft_strlen(str);
	printf("string: %s\nNumero de caracteres: %d\n", str, l);
}
