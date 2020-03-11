/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:34:19 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 13:07:07 by ikuklina         ###   ########.fr       */
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
	size_t			i;

	if (str1 == str2)
		return (str1);
	else if (str1 < str2)
		ft_memcpy(str1, str2, len);
	else
	{
		i = 0;
		dst = (unsigned char *)str1;
		src = (unsigned char *)str2;
		while (len > 0)
		{
			len--;
			dst[len] = src[len];
		}
	}
	return (str1);
}
