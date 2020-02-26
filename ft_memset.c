/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:15:30 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 10:57:04 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**fill a byte string with a byte value
**returns its first argument
*/

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char*)str;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
