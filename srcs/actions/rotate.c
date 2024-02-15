/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:52:31 by dabae             #+#    #+#             */
/*   Updated: 2023/12/07 12:53:34 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

static void	rotate(t_stack **a)
{
    t_stack  *last;

    if (!*a || !(*a)->next)
        return ;
    last = get_last_node(*a);
    last->next = *a;
    *a = (*a)->next;
    (*a)->prev = NULL;
    last->next->prev = last;
    last->next->next = NULL;

}    
void    ra(t_stack **a)
{
    rotate(a);
    write(1, "ra\n", 3);
}
void	rb(t_stack **b)
{
    rotate(b);
    write(1, "rb\n", 3);
}
void	rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}
