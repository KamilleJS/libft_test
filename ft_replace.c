/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:06:31 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/08 14:40:13 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns new string with changed character
*/

char	*ft_replace(char *str, char a, char b)
{
	int		i;
	char	*new;

	i = 0;
	new = (char*)malloc(sizeof(char) * ft_strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] == a)
			new[i] = b;
		else
			new[i] = str[i];
		i++;
	}
	return (new);
}
