/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:34:19 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/27 10:31:57 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copy byte string
** returns the original value of dst
*/

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if (str1 == str2)
		return (str1);
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (str1);
}
