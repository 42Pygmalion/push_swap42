/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 15:51:52 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/04 15:51:55 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*del_list(t_list *list, t_list *begin)
{
	list->prev->next = list->next;
	list->next->prev = list->prev;
	list = list->next;
	begin = list;
	return (begin);
}
