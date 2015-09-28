/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 15:51:18 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/04 15:51:21 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	custom_putstr(const char *str, int space)
{
	if (space)
		write(1, " ", 1);
	write(1, str, ft_strlen(str));
}

void	display_error(void)
{
	exit(write(2, "Error\n", 6) - 7);
}

long	custom_atoi(const char *str)
{
	int		i;
	long	r;
	long	positive;

	i = 0;
	r = 0;
	positive = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			positive = -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			display_error();
		r = r * 10 + (str[i] - 48);
		i++;
	}
	if (r * positive <= 2147483647 && r * positive >= -2147483648)
		return ((int)(r * positive));
	display_error();
	return (0);
}
