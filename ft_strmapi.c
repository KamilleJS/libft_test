/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:30:58 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 17:01:55 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** applies the function f to each character of the string passed as argument
** by giving its index as first argument to create a new string
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*news;
	unsigned int	i;
	int				j;

	if (!s || !f)
		return (NULL);
	i = 0;
	j = 0;
	news = (char *)s;
	news = ft_memalloc(ft_strlen(s) + 1);
	while (s[j])
	{
		news[j] = f(i, s[j]);
		i++;
		j++;
	}
	news[j] = '\0';
	return (news);
}
