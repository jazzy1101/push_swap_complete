/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:05:16 by dabae             #+#    #+#             */
/*   Updated: 2023/12/07 13:09:25 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>


typedef struct s_stack
{
	int	num;
	int index;
	int cost;
	bool cheapest;
	bool before_median;
	
	struct 	s_stack *target;
	struct 	s_stack *next;
	struct	s_stack	*prev;
} t_stack;

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void swap_3(t_stack **stack);
void swap_big(t_stack **stack_a, t_stack **stack_b);
void push_swap(t_stack **stack_a, t_stack **stack_b);
void to_top(t_stack **stack, t_stack *node, char which_stack);
void push_cheapest_a_to_b(t_stack **stack_a, t_stack **stack_b);
void    push_back_b_to_a(t_stack **stack_a, t_stack **stack_b);
void init_stack(t_stack **a, char **av);
char **split_argv(char *s, char c);
void add_node_end(t_stack **stack, int num);
char	**ft_free_tab(char **tab);
t_stack *get_last_node(t_stack *stack);
t_stack *ft_max_node(t_stack *stack);
t_stack		*ft_min_node(t_stack *stack);
int stack_size(t_stack *stack);
t_stack *get_cheapest_node(t_stack *stack);
void set_index_median(t_stack *stack);
bool check_sorted(t_stack *stack);
t_stack *ft_second_last_node(t_stack *stack);
void find_target_in_a(t_stack *stack_a, t_stack *stack_b);
void find_target_in_b(t_stack *stack_a, t_stack *stack_b);
void calcul_cost_a(t_stack *stack_a, t_stack *stack_b);
void set_cheapest(t_stack *stack_a);
void free_stack(t_stack **stack);

long ft_atol(const char *nptr);

#endif