/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   needs_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 15:51:35 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/04 15:51:38 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		needs_sort(t_list *list, t_list *begin, int touched)
{
	while (1)
	{
		if (list->next == begin)
			break ;
		if (list->num > list->next->num)
			return (1);
		list = list->next;
	}
	if (!touched)
		we_good();
	return (0);
}
