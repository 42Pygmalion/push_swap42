/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 15:52:55 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/04 15:57:48 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct			s_list
{
	struct s_list		*next;
	struct s_list		*prev;
	int					num;
}						t_list;

typedef struct			s_lazy
{
	int					min;
	int					space;
}						t_lazy;

long					custom_atoi(const char *str);
int						ft_strlen(const char *str);
void					custom_putstr(const char *str, int space);
void					display_error();
t_list					*new_list(int nb, void *prev);
t_list					*add_list(t_list *lst, int nb);
int						needs_sort(t_list *list, t_list *begin, int touched);
int						find_min(t_list *list, t_list *begin);
t_list					*move_min(t_list *l, int s, t_lazy *la);
void					we_good();
void					pushswap(t_list *b, t_list *l, int s, t_lazy la);
t_list					*sa(t_list *list, int space);
t_list					*ra(t_list *list, int space);
t_list					*rra(t_list *list, int space);
void					pa();
t_list					*pb(t_list *list, t_list *begin, int space);
t_list					*del_list(t_list *list, t_list *begin);
int						dealing_with_errors(int ac, char **av);

#endif
