/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:57:53 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/11 14:31:29 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** compare byte string
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	while (*ps1 == *ps2 && ++i < n)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		if (n > 0)
		{
			ps1++;
			ps2++;
		}
	}
	return ((int)(*ps1 - *ps2));
}
