/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:55:13 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/05 18:11:24 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** printing character test (space character inclusive)
*/

int	ft_isprint(int str)
{
	if (str > 31 && str < 127)
		return (1);
	return (0);
}
