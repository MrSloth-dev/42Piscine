/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:42:50 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/25 16:35:15 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned	int n)
{
	unsigned int	diff;
	unsigned int	i;

	i = 0;
	diff = 0;
	while ((s2[i] || s1[i]) && diff == 0 && i < n)
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
	char	*s1 = "love is bulshi";
	char	*s2 = "love is always";
	int	n = 4;
	printf("%d",ft_strncmp(s1, s2, n));
	return (0);
}*/
