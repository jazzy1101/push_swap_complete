#include "../push_swap.h"

void    free_stack(t_stack **stack)
{
    t_stack *tmp;
    t_stack *curr_node;

    if (!*stack)
        return ;
    curr_node = *stack;
    while (curr_node)
    {
        tmp = curr_node->next;
        free(curr_node);
        curr_node = tmp;
    }
    *stack = NULL;
}