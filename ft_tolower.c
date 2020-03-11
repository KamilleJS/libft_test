/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:06:01 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/06 12:58:25 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** upper case to lower case letter conversion
*/

int	ft_tolower(int str)
{
	if (str >= 'A' && str <= 'Z')
		return (str - 'A' + 'a');
	return (str);
}
