/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 14:04:28 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/02 18:19:31 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocate and returns a string ending with ’\0’ representing the integer n
** given as argument
*/

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		num;

	i = 0;
	if (n < 0)
		i = 1;
	num = ft_countnum(n);
	str = ft_strnew(num + i);
	if (str == NULL)
		return (NULL);
	if (i)
		str[0] = '-';
	j = num + i - 1;
	while (j >= i)
	{
		if (i)
			str[j--] = (n % 10 * -1) + '0';
		else
			str[j--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
