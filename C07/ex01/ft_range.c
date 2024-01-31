/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:59:01 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/26 10:35:25 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	i = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(range * sizeof(int));
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int i = 0;
	int min = -3;
	int max = 3;
	int *arr = NULL;
	int range = max - min;
	arr = ft_range(min, max);
	for (i = 0; i < range; i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	return (0);
}*/	
