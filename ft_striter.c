/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:18:01 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/27 20:31:36 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** applies the function f to each character of the string passed as argument
*/

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
	{
		f(s);
		s++;
	}
}