/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:09:28 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/30 20:09:20 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	bn;

	if (nb == 1)
		return (1);
//	bn = nb / 2;
	i = 1;
	while ((i * i) != nb)
	{
		i++;
		if (i >  46340)
			return (0);
	}
	return (i);
}

#include <stdio.h>
#include <time.h>

int main()
{
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	printf("square root 16 : %d \n", ft_sqrt(16));
	printf("square root 4 : %d \n", ft_sqrt(4));
	printf("square root 2147483647 : %d \n", ft_sqrt(2147395601));
	printf("square root 0 : %d \n", ft_sqrt(0));
	printf("square root -1 : %d \n", ft_sqrt(-1));
	end = clock();
	cpu_time_used =((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Elapsed time:  %f\n", cpu_time_used);
	return (0);
}

