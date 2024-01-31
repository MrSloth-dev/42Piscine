/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:05:35 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/30 19:03:33 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_fullstrlen(char **strs, char *str, int size);
int	ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	auto char *fullstr = NULL;
	auto int i = 0, j = 0, k = 0;
	auto int fullstrlen = ft_fullstrlen(strs, sep, size);
	if (size < 1)
		return(malloc(1));
	fullstr = (char *)malloc((fullstrlen + 1) * (sizeof (char)));
	if (!(fullstr))
		return (NULL);
	while (i < size)
	{
		while (strs[i][j])
			fullstr[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			fullstr[k++] = sep[j++];
		j = 0;
		i++;
	}
	return (fullstr);
}

int	ft_fullstrlen(char **strs, char *sep, int size)
{
	auto int i = 0, len = 0;
	len = ft_strlen(sep) * (size - 1);
	while (i < size)
		len += (ft_strlen(strs[i++]));
	return (len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	auto char **strs = (char **) malloc(10 * sizeof(char*));
	auto char *join = NULL;
	
	strs[0] = "";
	strs[1] = "O meu nome e Vanessa";
	strs[2] = "Curti ver como esmagaste os rappers la na festa";
	strs[3] = "Sempre fui tua fa, mas e a primeira vez que te vejo";
	strs[4] = "Julgava-te mais velho, mas tu parece que tens uns 16";
	strs[5] = "Nao mana, tenho 25 anos";
	strs[6]= "Carinha de puto mas funciono como um homem grande";
	strs[7] = "Ainda bem que vieste, precisava mesmo de companhia";
	strs[8] = "Tou aqui a espera do autocarro com medo de uma pneumonia";
	strs[9] = "lol";
	join = ft_strjoin(10, strs, ", ");
	printf("...%s",join);
	free(join);
	free(strs);
	return (0);
}
*/
