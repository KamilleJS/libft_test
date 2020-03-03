/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:28:22 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/02 18:36:20 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**find length of string
*/

size_t	ft_strlen(const char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}
