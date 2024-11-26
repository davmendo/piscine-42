/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:29:19 by davmendo          #+#    #+#             */
/*   Updated: 2024/09/25 12:45:52 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
/*
#include <unistd.h>

int	main()
{
	ft_putnbr(42);
	write(1, "\n", 1);

	ft_putnbr(312084584);
        write(1, "\n", 1);

	ft_putnbr(4244242);
        write(1, "\n", 1);

	ft_putnbr(-214783648);
        write(1, "\n", 1);
}
*/
