/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 09:45:57 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/28 10:24:35 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates and returns a “fresh” substring from the string given as argument
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*subs;

	i = 0;
	subs = ft_strnew(len);
	if (!s || !subs)
		return (NULL);
	while (s[start] && len > 0)
	{
		subs[i] = s[start];
		start++;
		i++;
		len--;
	}
	subs[i] = '\0';
	return (subs);
}
