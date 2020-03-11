/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:55:33 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/06 13:00:53 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** lower case to upper case letter conversion
*/

int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
		return (str - 'a' + 'A');
	return (str);
}
