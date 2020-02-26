/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:04:34 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 14:44:55 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**outputs a character or word to a standart output
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
