/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:26:13 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/25 21:13:15 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**alphabetic character test
**returns zero if the character tests false
**returns non-zero if the character tests true
*/

int	ft_isalpha(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		return (1);
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
