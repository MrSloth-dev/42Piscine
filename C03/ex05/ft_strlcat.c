/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:35:44 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/25 17:30:18 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	result = ft_strlen(src);
	if (size < 1)
		return (result + size);
	if (size < dest_len)
	{
		result = result + size;
	}
	else
		result = result + dest_len;
	while (src[i] && i < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (result);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int main()
{
	char	dest[]= "mother"; 
	char	src[] = "ijustkilledaman";
	unsigned int n = 3;
	ft_strlcat(dest, src, n);	
	printf("%s", dest);
	return (0);
}*/
