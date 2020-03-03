/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:31:07 by ikuklina          #+#    #+#             */
/*   Updated: 2020/03/02 17:40:34 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** iterates a list lst and applies the function f to each link to create a list
** resulting from the successive applications of f
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	if (lst)
	{
		newlst = f(lst);
		newlst->next = ft_lstmap(lst->next, f);
		return (newlst);
	}
	return (NULL);
}
