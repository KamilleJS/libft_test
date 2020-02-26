/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:44:24 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/25 19:35:30 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int			i;
	int			min;
	long int	nmb;

	i = 0;
	min = 1;
	nmb = 0;
	if (!str[i])
		return (0);
	while (str[i] < 33)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nmb = (nmb * 10) + str[i++] - 48;
	}
	nmb = nmb * min;
	if (nmb > 2147483647)
		return (2147483647);
	if (nmb < -2147483648)
		return (-2147483648);
	return (nmb);
}
