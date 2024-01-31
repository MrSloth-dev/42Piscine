/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:32:13 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/23 15:05:37 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	else if (nb % 2 == 0 && nb != 2)
		return (0);
	else if (nb == 2)
		return (1);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("number 384537: %d \n",  ft_is_prime(384537));
	printf("number 5 : %d \n",  ft_is_prime(5));
	printf("number 17 : %d \n", ft_is_prime(17));
	printf("number 0 : %d \n",  ft_is_prime(0));
	printf("number -1 : %d \n", ft_is_prime(-1));
	return (0);
}
*/
