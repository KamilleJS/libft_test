/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 13:52:14 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/27 14:17:49 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locate character in string
*/

char	*ft_strchr(const char *s, int c)
{
	char c1;

	c1 = (char)c;
	while (*s != c1 && *s != '\0')
		s++;
	if (*s == '\0' && c1 != '\0')
		return (NULL);
	return ((char *)s);
}
