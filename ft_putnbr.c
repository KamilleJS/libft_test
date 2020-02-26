/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:47:45 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 15:10:10 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** output an integer to a standart output
*/

void	ft_putnbr(int nb)
{
	long int lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb = lnb * -1;
	}
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		ft_putnbr(lnb % 10);
	}
	else
		ft_putchar(lnb + '0');
}
