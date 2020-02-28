/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 09:36:40 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/28 09:45:31 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** comparison between s1 and s2
** up to n char- acters or until a ’\0’ is reached
*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (*s1 && *s2 && n > 1)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (1);
}
