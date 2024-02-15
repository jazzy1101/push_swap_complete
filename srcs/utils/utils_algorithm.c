/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algorithm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 09:14:50 by dabae             #+#    #+#             */
/*   Updated: 2023/12/28 09:14:53 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    add_node_end(t_stack **stack, int num)
{
    t_stack *new;
    t_stack *last;

    if (!stack)
        return;
    new = malloc(sizeof(t_stack));
    if (!new)
        return;
    new->next = NULL;
    new->num = num;
    if (!(*stack))
    {
        *stack = new;
        new->prev = NULL;
    }
    else
    {
        last = get_last_node(*stack);
        last->next = new;
        new->prev = last;
    }
}

void    set_index_median(t_stack *stack)
{
    int i;
    int median;

    i = 0;
    if (!stack)
        return ;
    median = stack_size(stack) / 2;
    while (stack)
    {
        stack->index = i;
        if (i < median)
            stack->before_median = true;
        else
            stack->before_median = false;
        i++;
        stack = stack->next;
    }
}

bool check_sorted(t_stack *stack)
{
    if (!stack || !(stack->next))
        return (true);
    while (stack->next)
    {
        if (stack->num > stack->next->num)
            return (false);
        stack = stack->next;
    }
    return (true);
}

void    to_top(t_stack **stack, t_stack *node, char which_stack)
{
    while (*stack != node)
    {    
        if (which_stack == 'a')
        {
            if (node->before_median)
                ra(stack);
            else
                rra(stack);
        }
        else if (which_stack == 'b')
        {
            if (node->before_median)
                rb(stack);
            else
                rrb(stack); 
        }
    }
}
