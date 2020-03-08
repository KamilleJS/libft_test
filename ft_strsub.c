/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 09:45:57 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 16:26:11 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates and returns a “fresh” substring from the string given as argument
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*subs;

	i = -1;
	if (!s)
		return (NULL);
	subs = ft_strnew(len);
	if (!subs)
		return (NULL);
	while (++i < len)
		subs[i] = s[start + i];
	subs[i] = '\0';
	return (subs);
}
