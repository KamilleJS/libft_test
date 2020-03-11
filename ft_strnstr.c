/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:18:43 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 13:15:20 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locate a substring to a string
*/

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*find;

	str1 = (char *)str;
	find = (char *)to_find;
	if (find[0] == '\0' || find == NULL)
		return (str1);
	i = 0;
	while (str1[i] && i < len)
	{
		j = 0;
		while (find[j] == str1[i + j] && i + j < len)
		{
			if (find[j + 1] == '\0')
				return (str1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
