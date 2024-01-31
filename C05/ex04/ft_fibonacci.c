/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:52:50 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/24 15:41:07 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else 
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int main()
{
	printf("index 46 : %d \n", ft_fibonacci(46));
	printf("index 5 : %d \n", ft_fibonacci(5));
	printf("index 10 : %d \n", ft_fibonacci(10));
	printf("index 0 : %d \n", ft_fibonacci(0));
	printf("index -1 : %d \n", ft_fibonacci(-1));
	return (0);
}

