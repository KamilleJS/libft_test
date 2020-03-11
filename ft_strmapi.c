/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:30:58 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/08 13:18:42 by ikuklina         ###   ########.fr       */
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

	if (!s || !f)
		return (NULL);
	i = 0;
	news = (char *)(malloc(sizeof(char) * (ft_strlen(s) + 1)));
	if (news == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
