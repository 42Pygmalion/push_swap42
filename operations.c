/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 15:52:16 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/04 15:52:18 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*sa(t_list *list, int space)
{
	int	num;

	num = list->next->num;
	list->next->num = list->num;
	list->num = num;
	custom_putstr("sa", space);
	return (list);
}

t_list	*ra(t_list *list, int space)
{
	list = list->next;
	custom_putstr("ra", space);
	return (list);
}

t_list	*rra(t_list *list, int space)
{
	list = list->prev;
	custom_putstr("rra", space);
	return (list);
}

void	pa(void)
{
	custom_putstr("pa", 1);
}

t_list	*pb(t_list *list, t_list *begin, int space)
{
	list = del_list(list, begin);
	custom_putstr("pb", space);
	return (list);
}
