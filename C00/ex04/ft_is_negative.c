/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:38:51 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/16 11:37:02 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
		write(1, &neg, 1);
	else
		write(1, &pos, 1);
}

/*
int	main(void)
{
	write(1, "teste '4'", 9);
	write(1, "\n", 1);
	ft_is_negative(4);
	write(1, "\n", 1);
	write(1, "teste '-4'", 10);
	write(1, "\n", 1);
	ft_is_negative(-4);
	write(1, "\n", 1);
	write(1, "teste '0'", 9);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	return (0);
}
*/
