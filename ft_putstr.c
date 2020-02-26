/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:21:27 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 14:50:51 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**outputs a string to a standart output
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
