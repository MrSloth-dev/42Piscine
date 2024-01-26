/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 00:24:39 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/12 01:02:50 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_print_numbers(void)
{
	for(char i = 48; i < 58; i++)
	{
		write(1, &i,1);	
	}
	write(1,"\n",1);
}


int main()
{
	ft_print_numbers();
}
