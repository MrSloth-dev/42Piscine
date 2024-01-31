/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:00:38 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/22 11:57:18 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf(" 5  power 3     %d\n",ft_iterative_power(5,3));
	printf(" 4  power 2    %d\n",ft_iterative_power(4,2));
	printf(" -3 power 2   %d\n",ft_iterative_power(-3,2));
	printf(" 0  power 2    %d\n",ft_iterative_power(0,0));
	printf(" 23 power 3   %d\n",ft_iterative_power(23,3));
	printf(" -10 power 2 %d\n",ft_iterative_power(-100,2));
	return 0;
}
*/	
