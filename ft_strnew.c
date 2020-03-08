/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:23:14 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/07 15:43:46 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates the string
*/

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size + 1);
	return (str);
}
