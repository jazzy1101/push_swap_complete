/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:53:41 by dabae             #+#    #+#             */
/*   Updated: 2023/12/07 13:53:44 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"


t_stack *get_last_node(t_stack *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

t_stack  *ft_second_last_node(t_stack *stack)
{
    while (stack && stack->next && !(stack->next->next))
        stack = stack->next;
    return (stack);
}

t_stack  *ft_max_node(t_stack *stack)
{
    int max;
    t_stack *max_node;

    if (!stack)
        return (NULL);
    max = stack->num;
    max_node = stack;
    while (stack)
    {
        if (stack->num > max)
        {
            max = stack->num;
            max_node = stack;
        }
        stack = stack->next;
    }
    return (max_node);
}

t_stack  *ft_min_node(t_stack *stack)
{
    int min;
    t_stack *min_node;

    if (!stack)
        return (NULL);
    min = stack->num;
    min_node = stack;
    while (stack)
    {
        if (stack->num < min)
        {
            min = stack->num;
            min_node = stack;
        }
        stack = stack->next;
    }
    return (min_node);
}

int stack_size(t_stack *stack)
{
    int i;

    i = 0;
    while (stack)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}

