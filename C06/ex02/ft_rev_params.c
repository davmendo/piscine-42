/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:59:59 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/18 10:29:55 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = argc - 1;
	while (c > 0)
	{
		i = 0;
		while (argv[c][i])
		{
			ft_putchar(argv[c][i]);
			i++;
		}
		ft_putchar('\n');
		c--;
	}
	return (0);
}
