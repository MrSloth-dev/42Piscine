/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 01:08:20 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/12 01:33:04 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
		write(1, "\n", 1);
	}
	else
	{	
		write(1, "P", 1);
		write(1, "\n", 1);
	}
}
/*int main()
{
	int n = 4;
	void ft_is_negative( n );
	return 0;
}
*/
