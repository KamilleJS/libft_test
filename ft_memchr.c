/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:45:44 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/27 09:47:44 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locate byte in byte string
*/

void	*ft_memchr(void *str, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	cc;
	size_t			i;

	s = (unsigned char *)str;
	cc = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		if (s[i] == cc)
			return (s + i);
		i++;
	}
	return (NULL);
}
