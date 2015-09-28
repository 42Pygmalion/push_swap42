/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 15:52:34 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/04 19:23:27 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	we_good(void)
{
	write(1, "Preposterous\n", 13);
	exit(-1);
}

int		find_min(t_list *list, t_list *begin)
{
	int		min;
	int		i;
	int		pos;

	i = 1;
	min = 2147483647;
	pos = 0;
	while (1)
	{
		if (list->num < min)
		{
			min = list->num;
			pos = i;
		}
		list = list->next;
		i++;
		if (list == begin)
			break ;
	}
	return (pos);
}

t_list	*move_min(t_list *list, int size, t_lazy *lazy)
{
	while (1)
	{
		if (lazy->min == 1 || lazy->min == size + 1)
			return (list);
		else if (lazy->min == 2)
			return (sa(list, lazy->space++));
		else if (lazy->min > size / 2)
		{
			if (lazy->min <= size)
			{
				list = rra(list, lazy->space);
				lazy->min++;
			}
		}
		else
		{
			if (lazy->min > 1)
			{
				list = ra(list, lazy->space);
				lazy->min--;
			}
		}
		lazy->space++;
	}
}

void	pushswap(t_list *begin, t_list *list, int size, t_lazy lazy)
{
	int		original_size;

	lazy.min = 0;
	original_size = size;
	needs_sort(list, begin, 0);
	while (1)
	{
		lazy.min = find_min(list, begin);
		list = move_min(list, size, &lazy);
		begin = list;
		if (!(needs_sort(list, begin, 1)))
			break ;
		list = pb(list, begin, lazy.space++);
		begin = list;
		size--;
		if (!(needs_sort(list, begin, 1)))
			break ;
	}
	while (size < original_size)
	{
		(size == original_size - 1) ? pa() : pa();
		size++;
	}
}

int		main(int ac, char **av)
{
	t_list	*list;
	t_list	*begin;
	t_lazy	lazy;
	int		i;

	i = ac - 1;
	if (dealing_with_errors(ac, av) || ac <= 2)
		display_error();
	list = new_list(custom_atoi(av[i]), NULL);
	begin = list;
	lazy.space = 0;
	while (--i > 0)
		list = add_list(list, custom_atoi(av[i]));
	list = begin;
	pushswap(begin, list, ac - 1, lazy);
	free(list);
	write(1, "\n", 1);
	return (0);
}
