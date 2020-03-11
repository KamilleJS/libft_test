/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:37:17 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 15:18:52 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locate a substring to a string
*/

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	int a;

	i = 0;
	while (str[i])
	{
		j = 0;
		a = i;
		while (to_find[j] == str[a] && to_find[j])
		{
			a++;
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + a - ft_strlen(to_find)));
		i++;
	}
	if (*to_find == '\0')
		return ((char *)str);
	return (NULL);
}
