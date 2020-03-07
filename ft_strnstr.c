/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:18:43 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 10:29:55 by ikuklina         ###   ########.fr       */
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

	i = 0;
	j = 0;
	while (str[i] && i < len)
	{
		while (str[i + j] == to_find[j] && i + j < len)
			j++;
		if (!to_find[j])
			return ((char*)&str[i]);
		j = 0;
		i++;
	}
	return (0);
}
