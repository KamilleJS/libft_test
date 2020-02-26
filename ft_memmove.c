/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:34:19 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/25 19:18:00 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void* str1, const void* str2, size_t n)
{
    size_t          i;
    unsigned char   *dst;
    unsigned char   *src;

    if (str1 == str2)
        return (str1);
    i = 0;
    dst = (unsigned char *)str1;
    src = (unsigned char *)str2;
    while (i < n)
    {
        dst[i] = src[i];
        i++;
    }
    return (str1);
}