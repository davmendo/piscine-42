/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:49:09 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/13 12:35:02 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ing;

	ing = 0;
	while (str[ing] != '\0')
	{
		write (1, &str[ing], 1);
		ing++;
	}
}
/*
int	main()
{
	ft_putstr("string: 1\nstring: 2\nstring: 3\n");
}
*/
