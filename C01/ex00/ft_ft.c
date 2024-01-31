/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 02:10:06 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/16 17:43:28 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int 	main(void)
{
	int i;
	int *ptr;
	int x;
	int y;

	i = 41;
	ptr = &i;
	*ptr = i
	ft_ft(ptr);
	x = i / 10 +'0';
	y = i % 10 +'0';
	write(1, &x, 1);
	write(1, &y, 1);
	return 0;
}
