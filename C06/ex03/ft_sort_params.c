/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:34:03 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/18 17:41:16 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*swap;

	swap = *str1;
	*str1 = *str2;
	*str2 = swap;
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1]) > 0))
			{
				ft_swap(&argv[i], &argv[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		c = 1;
		while (c < argc)
		{
			ft_putstr(argv[c]);
			ft_putchar('\n');
			c++;
		}
	}
	return (0);
}
