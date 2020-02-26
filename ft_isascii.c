/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:09:34 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 15:09:29 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** test for ASCII character
*/

int	ft_isascii(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i] <= 0 && str[i] >= 127)
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
