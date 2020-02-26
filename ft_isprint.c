/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:55:13 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/25 21:17:35 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**printing character test (space character inclusive)
*/

int	ft_isprint(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i] >= 0 && str[i] <= 31 && str[i] == 127)
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
