/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:45:42 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/28 00:13:10 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	if (!src)
		return (NULL);
	i = 0;
	dup = NULL;
	dup = malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	char *str = "whiskas saquetas";
	char *dupdup;
	dupdup = NULL;
	dupdup = ft_strdup(str);
	printf("%s", dupdup);
	free(dupdup);
	return 0;
}

*/	
