/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:27:41 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/02 17:29:09 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** adds the element new at the beginning of the list
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && *alst && new)
		new->next = *alst;
	*alst = new;
}
