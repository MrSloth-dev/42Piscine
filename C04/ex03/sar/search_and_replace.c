/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:15:37 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/26 00:33:09 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);
int	main(int argc, char *argv[])
{
	int i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return(1);
	}
	if (ft_strlen(argv[2]) > 1 || ft_strlen(argv[3]) > 1)
	{
		write(1, "\n", 1);
		return(2);
	}
	while(argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}



int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}
	return(i);
}
