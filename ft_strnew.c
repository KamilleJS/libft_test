/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:23:14 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/27 20:00:55 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates the string and initializes it to 0
*/

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size + 1);
	ft_bzero(str, size + 1);
	return (str);
}
