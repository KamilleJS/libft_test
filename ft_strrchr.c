/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:20:19 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/05 15:30:11 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the last occurrence of a character in a string
** returns a pointer to the last location of c in string, if the c is found
*/

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)str;
	while (str[i])
		i++;
	while (str[i] != c && i != 0)
		i--;
	if (str[i] == c)
		return (p + i);
	else
		return (NULL);
}
