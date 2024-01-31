/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:54:41 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/26 10:37:01 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)(malloc((size) * sizeof (*range)));
	if (!range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main()
{
	int i = 0;
	int min = -3;
	int max = 3;
	int size;
	int **arr = NULL;
	int range = max - min;
	size = ft_ultimate_range(arr, min, max);

	for (i = 0; i < range; i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	return (0);
}*/
