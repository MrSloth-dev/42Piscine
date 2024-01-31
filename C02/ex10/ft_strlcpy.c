/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:13:23 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/22 12:10:30 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	sizesrc;
	unsigned int	i;

	i = 0;
	sizesrc = ft_strlen(src);
	while (i < (size -1) && src[i] != '\0')
	{
		dest[i] = src[i];
		sizecpy++;
		i++;
	}
	dest[i] = '\0';
	return (sizesrc);
}

#include <stdio.h>
int main()
{
	char src[] = "Heoaisdjoadsijllo2";
	char dest[] = "How are you";
	unsigned int output;
	output = ft_strlcpy(dest, src, 9);
	printf(" %d", output);
	printf(" %s", dest);
return 0;
}
