/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:19:40 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/02 17:27:17 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes as a parameter the adress of a pointer to a link and frees the memory
** of this link and every successors of that link
** using the functions del and free
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (alst && *alst && del)
	{
		while (*alst)
		{
			temp = (*alst)->next;
			ft_lstdelone(alst, del);
			(*alst) = temp;
		}
	}
}
