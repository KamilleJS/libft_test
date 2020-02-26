/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:45:56 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 14:49:04 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**output an integer to a file descriptor
*/

void	ft_putnbr_fd(int nb, int fd)
{
	long int lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar_fd('-', fd);
		lnb = lnb * -1;
	}
	if (lnb >= 10)
	{
		ft_putnbr_fd(lnb / 10, fd);
		ft_putnbr_fd(lnb % 10, fd);
	}
	else
		ft_putchar_fd(lnb + '0', fd);
}
