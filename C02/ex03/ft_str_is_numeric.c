/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 02:59:10 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/16 12:28:20 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	numeric;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			numeric = 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char *str = "16565168";
	printf("text : 16565168\n");
	printf(" return value is %d 1 is numeric 0 is not\n", ft_str_is_numeric(str));
	char *stri = "1548a451";
	printf("text : 1548a451\n");
	printf(" return value is %d 1 is numeric 0 is not\n", ft_str_is_numeric(stri));
	return (0);
}*/
