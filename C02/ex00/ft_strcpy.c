/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:49:12 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/20 01:35:26 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*saved;
	int i;

	i = 0;
	saved = dest;
	while ((src[i] !=0))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
		return (saved);
}
/*
#include <stdio.h>
int main(void)
{
	char *destination; 
	char *source = "I said watwat in the butt";
	ft_strcpy(destination, source);
	printf("Copied text: %s", destination);
	return (0);
}*/
