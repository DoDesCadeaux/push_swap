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
	if (stack_a->first->value < stack_a->first->next->value)
		return ;
	else if (stack_a->first->value > stack_a->first->next->value)
	{
		swap_a(stack_a, 1);
		write(1, "sa\n", 3);
	}
}

void	sort_three_args(t_list *stack_a)
{
	if ((stack_a->first->value > stack_a->first->next->value)
		&& (stack_a->first->value < stack_a->first->next->next->value))
		swap_a(stack_a, 1);
	else if ((stack_a->first->value > stack_a->first->next->value)
		&& (stack_a->first->value > stack_a->first->next->next->value)
		&& (stack_a->first->next->value > stack_a->first->next->next->value))
	{
		swap_a(stack_a, 1);
		reverse_rotate_a(stack_a, 1);
	}
	else if ((stack_a->first->value < stack_a->first->next->value)
		&& (stack_a->first->value < stack_a->first->next->next->value))
	{
		swap_a(stack_a, 1);
		rotate_a(stack_a, 1);
	}
	else if ((stack_a->first->value > stack_a->first->next->value)
		&& (stack_a->first->next->value < stack_a->first->next->next->value))
		rotate_a(stack_a, 1);
	else if ((stack_a->first->value < stack_a->first->next->value)
		&& (stack_a->first->next->value > stack_a->first->next->next->value))
		reverse_rotate_a(stack_a, 1);
}
