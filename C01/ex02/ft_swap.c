/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 02:30:00 by joao-pol          #+#    #+#             */
/*   Updated: 2024/02/01 23:34:10 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int main()
{
	int *a;
	int aa = 42;

	a = &aa;
	int *b;
	int bb = 21;
       	b = &bb;
	ft_swap(a,b);
	printf("a is now %d and b is now %d", *a, *b);
}	
