/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:25:03 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/25 20:32:27 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_sqrt(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb % 2 == 0 && nb != 2)
		i = nb +1;
	else if (nb == 2)
		return (2);
	else
		i = nb;
	while (1)
	{
		if (!ft_is_prime(i))
			i +=2;
		else
			return (i);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int 	bn;

	bn = nb/2;
	i = 3;
	if (nb < 2)
		return (0);
	else if (nb % 2 == 0 && nb != 2)
		return (0);
	else if (nb == 2)
		return (1);
	while (i < 46340)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

#include <time.h>
#include <stdio.h>
int main()
{
	clock_t start, end;
	double cpu;
	start = clock();
	printf("number 2147483647: %d \n",  ft_find_next_prime(2147483647));
	printf("number 384516 : %d \n",  ft_find_next_prime(384516));
	printf("number 91  : %d \n", ft_find_next_prime(90));
	printf("number 0 : %d \n",  ft_find_next_prime(0));
	printf("number -1 : %d \n", ft_find_next_prime(-1));
	end = clock();
	cpu = ((double) (end - start))/CLOCKS_PER_SEC;
	printf("Elapsed time: %fs",cpu);
	return (0);
}
