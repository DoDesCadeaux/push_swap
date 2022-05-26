/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:24:07 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/18 19:24:09 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_last_index(t_list *stack_a, t_list *stack_b, int index)
{
	if (index == 2)
	{
		rotate_a(stack_a, 1);
		rotate_a(stack_a, 1);
		push_b(stack_a, stack_b);
		sort_three_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
	else if (index == 3)
	{
		reverse_rotate_a(stack_a, 1);
		push_b(stack_a, stack_b);
		sort_three_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
}

void	three_last_index(t_list *stack_a, t_list *stack_b, int index)
{
	if (index == 2)
	{
		rotate_a(stack_a, 1);
		rotate_a(stack_a, 1);
		push_b(stack_a, stack_b);
		sort_four_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
	else if (index == 3)
	{
		reverse_rotate_a(stack_a, 1);
		reverse_rotate_a(stack_a, 1);
		push_b(stack_a, stack_b);
		sort_four_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
	else if (index == 4)
	{
		reverse_rotate_a(stack_a, 1);
		push_b(stack_a, stack_b);
		sort_four_args(stack_a, stack_b);
		push_a(stack_b, stack_a);
	}
}

void	normi_index(int index, t_list *stack_a, t_list *stack_b)
{
	if (index == 0)
	{
		push_b(stack_a, stack_b);
		sort_two_args(stack_a);
		push_a(stack_b, stack_a);
	}
	else if (index == 1)
	{
		if (stack_a->first->value > stack_a->first->next->next->value)
			rotate_a(stack_a, 1);
		else
			swap_a(stack_a, 1);
	}
	else if (index == 2)
	{
		if (stack_a->first->value > stack_a->first->next->value)
		{
			swap_a(stack_a, 1);
			reverse_rotate_a(stack_a, 1);
		}
		else
			reverse_rotate_a(stack_a, 1);
	}
}
