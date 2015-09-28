/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 15:50:41 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/04 15:50:44 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*add_list(t_list *lst, int nb)
{
	t_list *tmp;

	if (lst == NULL)
		return (new_list(nb, NULL));
	tmp = lst;
	while (tmp->next && tmp->next != lst)
		tmp = tmp->next;
	tmp->next = new_list(nb, tmp);
	tmp->next->next = lst;
	tmp->next->next->prev = tmp->next;
	return (lst);
}
