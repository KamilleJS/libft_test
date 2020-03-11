/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 10:43:30 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 10:48:34 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** find length of words
*/

int	ft_length(const char *str, char c)
{
	int len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}
