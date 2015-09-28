/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dealing_with_errors.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 15:51:00 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/04 15:51:10 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int		doublons(int ac, char **av)
{
	int		i;
	int		tmp;
	int		j;

	i = 1;
	j = 1;
	while (j < ac)
	{
		tmp = custom_atoi(av[j]);
		i = j;
		while (av[++i])
		{
			if (tmp == custom_atoi(av[i]))
				return (1);
		}
		j++;
	}
	return (0);
}

int				dealing_with_errors(int ac, char **av)
{
	if (doublons(ac, av))
		return (1);
	return (0);
}
