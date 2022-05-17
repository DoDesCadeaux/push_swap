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
