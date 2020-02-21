/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:55:13 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/20 13:09:05 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
