/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:38:45 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/17 17:38:46 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list *stack_a, int message)
{
	int	first_value;
	int	next_value;

	if (!stack_a)
		ft_print_error();
	first_value = stack_a->first->value;
	next_value = stack_a->first->next->value;
	stack_a->first->next->value = first_value;
	stack_a->first->value = next_value;
	if (message == 1)
		write(1, "sb\n", 3);
}

void	push_b(t_list *from_stack_a, t_list *to_stack_b)
{
	if (!from_stack_a)
		exit(EXIT_FAILURE);
	add_front(to_stack_b, from_stack_a->first->value);
	delete_first(from_stack_a);
	write(1, "pb\n", 3);
}

void	rotate_b(t_list *stack_b, int message)
{
	if (!stack_b)
		exit(EXIT_FAILURE);
	add_back(stack_b, stack_b->first->value);
	delete_first(stack_b);
	if (message == 1)
		write(1, "rb\n", 3);
}

void	reverse_rotate_b(t_list *stack_b, int message)
{
	t_node	*temp;

	if (!stack_b)
		exit(EXIT_FAILURE);
	temp = stack_b->first;
	while (temp->next)
		temp = temp->next;
	add_front(stack_b, temp->value);
	delete_last(stack_b);
	if (message == 1)
		write(1, "rrb\n", 4);
}
