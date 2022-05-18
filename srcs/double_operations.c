/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:35:48 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/18 15:35:50 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_both(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a || !stack_b)
		ft_print_error();
	swap(stack_a);
	swap(stack_b);
}

void	rotate_both(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a || !stack_b)
		exit(EXIT_FAILURE);
	rotate(stack_a);
	rotate(stack_b);
}

void	reverse_rotate_both(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a || !stack_b)
		exit(EXIT_FAILURE);
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
