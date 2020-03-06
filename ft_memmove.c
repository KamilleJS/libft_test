/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:34:19 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/06 10:53:12 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copy byte string
** returns the original value of dst
*/

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if (str1 == str2)
		return (str1);
	while (len > 0)
	{
		len--;
		dst[len] = src[len];
	}
	return (str1);
}
