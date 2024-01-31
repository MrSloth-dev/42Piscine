/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 03:06:18 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/16 12:33:20 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			alpha = 1;
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
	char *str = "OHMEUDEU";
	printf("text : OHMEUDEU\n");
	printf(" return value is %d 1 is upper 0 is not\n", ft_str_is_uppercase(str));
	char *stri = "OHMEUdeu";
	printf("text : OHMEUdeu\n");
	printf(" return value is %d 1 is upper 0 is not\n", ft_str_is_uppercase(stri));
	return (0);
}*/
