/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:19:38 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/25 21:18:23 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**copy string until character found
*/

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)str1;
	src = (unsigned char *)str2;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == (unsigned char)c)
			return (str1 + i + 1);
		i++;
	}
	return (str1);
}
