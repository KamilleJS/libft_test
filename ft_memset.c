/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:15:30 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/21 14:51:37 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*it's a copy of the memset function in the string.h library*/

void    *memset(void *str, int c, size_t len)
{
    size_t i;
    
    i = 0;
    while (i < len)
    {
        str[i] = c;
        i++;   
    }
    return (str);
}
