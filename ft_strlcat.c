/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:38:08 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/11 09:22:35 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** size-bounded string copying and concatinating
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	j;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = 0;
	if (dstsize <= dstlen)
		srclen += dstsize;
	else
		srclen += dstlen;
	while (src[j] != '\0' && dstlen + 1 < dstsize)
	{
		dst[dstlen] = src[j];
		dstlen++;
		j++;
	}
	dst[dstlen] = '\0';
	return (srclen);
}
