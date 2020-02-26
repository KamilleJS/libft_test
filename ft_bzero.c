/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:30:01 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 15:09:13 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** write zeroes to a byte string
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
