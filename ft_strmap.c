/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:53:03 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/27 21:29:53 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** applies the function f to each character of the string given as argument
** to create a new string
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*news;
	int		i;

	i = 0;
	news = (char *)s;
	news = ft_memalloc(ft_strlen(s) + 1);
	while (*s)
	{
		news[i] = f(s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
