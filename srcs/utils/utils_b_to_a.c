#include "../push_swap.h"

void  find_target_in_a(t_stack *stack_a, t_stack *stack_b)
{
    t_stack *target;
    t_stack *curr;
    long biggest;

    while (stack_b)
    {
        biggest = LONG_MAX;
        curr = stack_a;
        while (curr)
        {
            if (curr->num > stack_b->num && curr->num < biggest)
            {
                biggest = curr->num;
                target = curr;
            }
            curr = curr->next;
        }
        if (biggest == LONG_MAX)
            stack_b->target = ft_min_node(stack_a);
        else
            stack_b->target = target;
        stack_b = stack_b->next;
    }
}
void    push_back_b_to_a(t_stack **stack_a, t_stack **stack_b)
{
    to_top(stack_a, (*stack_b)->target, 'a');
    pa(stack_a, stack_b);
}