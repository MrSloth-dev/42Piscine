/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:00:32 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/31 00:44:49 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	i;

	i = 0;
	diff = 0;
	while (((s2[i] || s1[i])) && diff == 0)
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
/*
#include <stdio.h>
int main()
{
	char *s1 = "abec";
	char *s2 = "abd";

	printf("%d",ft_strcmp(s1, s2));
	return (0);
}*/
