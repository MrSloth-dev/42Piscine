/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:49:37 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/13 01:37:53 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char u;
	char d;
	char c;
	char m;
	
	u = '0';
	d = '0';
	c = '0';
	m = '0';

	while (m <= '9')
	{

		while (c <= '9')
		{

			while (d <= '9')
			{
				while (u <= '9')
				{
					write(1, &u, 1);
					write(1, " ", 1);
					u++;
				}

				write(1, &d, 1);
					write(1, " ", 1);
				d++;
			}
			write(1, &c, 1);
					write(1, " ", 1);
			c++;
		}
	write(1, &m, 1);
					write(1, " ", 1);
	m++;
	}
}
int main(void)
{
	ft_print_comb2();
	return(0);
}




