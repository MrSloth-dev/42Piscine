/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 03:23:24 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/23 21:25:09 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_symbol(char str);
int		is_lowercas(char str);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	char	*low;
	int		i;

	low = ft_strlowcase(str);
	i = 0;
	if (i == 0 && is_lowercas(low[i]))
		low[i] = low[i] - 32;
	while (low[i])
	{
		if (is_symbol(low [i]))
		{
			if (is_lowercas(low[i + 1]))
			{
				low[i + 1] = low[i + 1] - 32;
			}
		}
		i++;
	}
	return (low);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

int	is_symbol(char str)
{
	if (str < 48 || (str > 57 && str < 65))
	{
		return (1);
	}
	else if ((str > 90 && str < 97) || (str > 122))
	{
		return (1);
	}
	else
		return (0);
}

int	is_lowercas(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}
#include <stdio.h>
int	main()
{
	char str[] = "oh m4u dEU";
	printf(" old text : %s \n", str);
	printf(" new text : %s \n\n", ft_strcapitalize(str));
	char stri[] = "OH ME UDEU";
	printf(" old text : %s \n", stri);
	printf(" new text : %s \n\n", ft_strcapitalize(stri));
	char strii[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf(" old text : %s \n", strii);
	printf(" new text : %s \n", ft_strcapitalize(strii));
	return (0);
}
