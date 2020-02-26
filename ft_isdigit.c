/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:32:06 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 15:09:36 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** decimal-digit character test
** return zero if the character tests false
** return non-zero if the character tests true
*/

int	ft_isdigit(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
