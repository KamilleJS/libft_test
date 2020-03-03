/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:38:08 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/02 18:35:44 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** size-bounded string copying and concatinating
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	dstlen = 0;
	srclen = 0;
	while (dst[i] != '\0')
	{
		i++;
		dstlen++;
	}
	while (src[srclen] != '\0')
		srclen++;
	if (dstlen + 1 > size)
		return (srclen + size);
	if (size > dstlen + 1)
	{
		while (i < size - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dstlen + srclen);
}
