/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:52:31 by dabae             #+#    #+#             */
/*   Updated: 2023/12/07 12:53:34 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

static void    swap(t_stack **a)
{  
    if (!(*a) || !((*a)->next))
        return ;
    *a = (*a)->next;
    (*a)->prev->prev = *a;
    (*a)->prev->next = (*a)->next;
    if ((*a)->next)
        (*a)->next->prev = (*a)->prev;
    (*a)->next = (*a)->prev;
    (*a)->prev = NULL;
        
}
void	sa(t_stack **a)
{
    swap(a);
    write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
    swap(b);
    write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
    swap(a);
    swap(b);
    write(1, "ss\n", 3);
}





