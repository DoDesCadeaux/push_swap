/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:45:32 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/18 15:45:34 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_args(t_list *stack_a)
{
	if (!stack_a)
		return ;
	if (stack_a->first->value < stack_a->first->next->value)
		return ;
	else if (stack_a->first->value > stack_a->first->next->value)
		swap_a(stack_a, 1);
}

void	sort_three_args(t_list *stack_a, t_list *stack_b)
{
	int	index;

	index = smallest_value(stack_a);
	if (!stack_a)
		exit(EXIT_FAILURE);
	normi_index(index, stack_a, stack_b);
}

void	sort_four_args(t_list *stack_a, t_list *stack_b)
{
	int	index;

	if (!stack_a)
		return ;
	index = smallest_value(stack_a);
	if (index == 0)
	{
		push_b(stack_a, stack_b);
		sort_three_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
	else if (index == 1)
	{
		rotate_a(stack_a, 1);
		push_b(stack_a, stack_b);
		sort_three_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
	two_last_index(stack_a, stack_b, index);
}

void	sort_five_args(t_list *stack_a, t_list *stack_b)
{
	int	index;

	if (!stack_a)
		return ;
	index = smallest_value(stack_a);
	if (index == 0)
	{
		push_b(stack_a, stack_b);
		sort_four_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
	else if (index == 1)
	{
		rotate_a(stack_a, 1);
		push_b(stack_a, stack_b);
		sort_four_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
	three_last_index(stack_a, stack_b, index);
}

void	small_stack(t_list *stack_a, t_list *stack_b, int argc)
{
	if (argc == 3)
		sort_two_args(stack_a);
	else if (argc == 4)
		sort_three_args(stack_a, stack_b);
	else if (argc == 5)
		sort_four_args(stack_a, stack_b);
	else if (argc == 6)
		sort_five_args(stack_a, stack_b);
}
