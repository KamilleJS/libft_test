/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getpositiv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:40:24 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/08 14:41:07 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** if int is negative makes it positive
*/

int	ft_getpositiv(int num)
{
	int	min;

	min = -1;
	if (num < 0)
		num = num * min;
	return (num);
}
