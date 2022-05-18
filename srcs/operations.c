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

void	swap(t_list *stack)
{
	int	first_value;
	int	next_value;

	if (!stack)
		ft_print_error();
	first_value = stack->first->value;
	next_value = stack->first->next->value;
	stack->first->next->value = first_value;
	stack->first->value = next_value;
}

void	swap_both(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a || !stack_b)
		ft_print_error();
	swap(stack_a);
	swap(stack_b);
}

void	push(t_list *from_stack, t_list *to_stack)
{
	if (!from_stack)
		exit(EXIT_FAILURE);
	add_front(to_stack, from_stack->first->value);
	delete_first(from_stack);
}

void	rotate(t_list *stack)
{
	if (!stack)
		exit(EXIT_FAILURE);
	add_back(stack, stack->first->value);
	delete_first(stack);
}

void	rotate_both(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a || !stack_b)
		exit(EXIT_FAILURE);
	rotate(stack_a);
	rotate(stack_b);
}

void	reverse_rotate(t_list *stack)
{
	t_node *temp;

	if (!stack)
		exit(EXIT_FAILURE);
	temp = stack->first;
	while (temp->next)
		temp = temp->next;
	add_front(stack, temp->value);
	delete_last(stack);
}

void	reverse_rotate_both(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a || !stack_b)
		exit(EXIT_FAILURE);
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
