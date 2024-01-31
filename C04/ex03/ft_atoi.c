/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:13:40 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/26 00:14:53 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isnumber(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	res;
				 
	res = 0;
	neg = 1;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (ft_isnumber(str[i]))   // -123
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * neg);
}

int	ft_isnumber(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

#include <stdio.h>
int main()
{
	char *str = "  -1234";
	printf("%d",ft_atoi(str));
return (0);
}
