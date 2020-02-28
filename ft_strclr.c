/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:11:36 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/27 20:17:16 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** sets every character of the string to the value ’\0’
*/

void	ft_strclr(char *s)
{
	while (*s)
	{
		*s = '\0';
		s++;
	}
}
