/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:11:49 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/30 17:08:28 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	j = 0;
	while (argc > 1)
	{
		while (argv[argc-1][j])
		{
			write(1, &argv[argc-1][j], 1);
			j++;
		}
		j = 0;
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
