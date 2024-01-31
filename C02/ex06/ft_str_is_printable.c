/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 03:09:42 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/16 16:57:43 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	print;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31)
		{
			print = 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
