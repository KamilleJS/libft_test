/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:11:39 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/26 15:12:42 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/*
** outputs a string to a file descriptor
*/

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
