/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:07:54 by boyola            #+#    #+#             */
/*   Updated: 2020/02/28 18:49:45 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the integer n to the standard output.
*/

void	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
		}
		i = (n % 10) + '0';
		write(1, &i, 1);
	}
}
