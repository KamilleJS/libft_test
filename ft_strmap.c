/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:53:03 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 15:02:50 by ikuklina         ###   ########.fr       */
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
	size_t	i;

	i = -1;
	if (!s || !f)
		return (NULL);
	if (!(news = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[++i])
		news[i] = f(s[i]);
	return (news);
}
