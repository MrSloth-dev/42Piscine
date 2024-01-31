/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:33:04 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/21 19:25:09 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb -1));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("fatorial 5    %d\n",ft_recursive_factorial(5));
	printf("fatorial 4    %d\n",ft_recursive_factorial(4));
	printf("fatorial -3    %d\n",ft_recursive_factorial(-3));
	printf("fatorial 0    %d\n",ft_recursive_factorial(0));
	printf("fatorial 23   %d\n",ft_recursive_factorial(23));
	printf("fatorial -100 %d\n",ft_recursive_factorial(-100));
	return 0;
}*/
