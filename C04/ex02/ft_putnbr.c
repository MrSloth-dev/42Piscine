/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:00:33 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/23 11:51:58 by joao-pol         ###   ########.fr       */
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
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10); 2 1
		ft_putnbr(nb % 10); 7
	}
	else
		ft_putchar(nb + 48);
}
/*
#include <stdio.h>
int main()
{
	int number = 217;
	printf("217\n");
	ft_putnbr(number);
	number = -42;
	printf("-42\n");
	ft_putnbr(number);
	number = -0;
	printf("-0\n");
	ft_putnbr(number);
	number = -2147483648;
	printf("-2147483648\n");
	ft_putnbr(number);
	return 0;
}*/
