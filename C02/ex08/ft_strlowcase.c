/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 03:21:29 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/16 13:12:36 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "ohm4udEU";
	printf(" new text : %s \n", ft_strlowcase(str));
	char stri[] = "OHMEUDEU";
	printf(" new text : %s \n", ft_strlowcase(stri));
	return (0);
}*/
