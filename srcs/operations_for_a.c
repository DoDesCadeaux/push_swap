/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_for_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:19:42 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/18 16:19:44 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list *stack_a, int message)
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
		write(1, "sa\n", 3);
}

void	push_a(t_list *from_stack_b, t_list *to_stack_a)
{
	if (!from_stack_b)
		exit(EXIT_FAILURE);
	add_front(to_stack_a, from_stack_b->first->value);
	delete_first(from_stack_b);
	write(1, "pa\n", 3);
}

void	rotate_a(t_list *stack_a, int message)
{
	if (!stack_a)
		exit(EXIT_FAILURE);
	add_back(stack_a, stack_a->first->value);
	delete_first(stack_a);
	if (message == 1)
		write(1, "ra\n", 3);
}

void	reverse_rotate_a(t_list *stack_a, int message)
{
	t_node	*temp;

	if (!stack_a)
		exit(EXIT_FAILURE);
	temp = stack_a->first;
	while (temp->next)
		temp = temp->next;
	add_front(stack_a, temp->value);
	delete_last(stack_a);
	if (message == 1)
		write(1, "rra\n", 4);
}
