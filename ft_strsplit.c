/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:03:50 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/06 18:38:18 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates and returns an array of strings (all ending with ’\0’, including the array itself)
** obtained by spliting s using the character c as a delimiter
*/

int	ft_countwords(char const *str, char c)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

char	**ft_strsplit(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = ft_countwords(str, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);

}

