/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:25:10 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/08 13:13:23 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copy memory area
*/

void	*ft_memcpy(void *str1, const void *str2, size_t len)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if (dst == NULL && src == NULL && len)
		return (NULL);
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (str1);
}
