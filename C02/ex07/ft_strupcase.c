/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 03:15:13 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/16 13:10:44 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "ohm4udEU";
	printf(" new text : %s \n", ft_strupcase(str));
	char stri[] = "OHMEUDEU";
	printf(" new text : %s \n", ft_strupcase(stri));
	return (0);
}*/
