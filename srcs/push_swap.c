/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:54:09 by dabae             #+#    #+#             */
/*   Updated: 2023/12/07 12:55:24 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void    push_swap(t_stack **a, t_stack **b)
{
    int size_lst;

    size_lst = stack_size(*a);
    if (size_lst == 2)
        sa(a);
    else if (size_lst == 3)
        swap_3(a);
    else
        swap_big(a, b);
}
