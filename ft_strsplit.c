/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:03:50 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 10:45:52 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates and returns an array of strings (all ending with ’\0’, including the array itself)
** obtained by spliting s using the character c as a delimiter
*/

char	**ft_strsplit(char const *str, char c)
{
	char	**s;
	int		num;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	num = ft_countwords(str, c);
	s = (char**)malloc(sizeof(char*) * (num + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < num)
	{
		while (str[j] && str[j] == c)
			j++;
		s[i] = ft_strsub(str, j, ft_length(str + j, c));
		while (str[j] && str[j] != c)
			j++;
		i++;
	}
	s[i] = NULL;
	return (s);
}
