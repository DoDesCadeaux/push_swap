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
		exit(EXIT_FAILURE);
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	write(1, "ss\n", 3);
}

void	rotate_both(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a || !stack_b)
		exit(EXIT_FAILURE);
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	write(1, "rr\n", 3);
}

void	reverse_rotate_both(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a || !stack_b)
		exit(EXIT_FAILURE);
	reverse_rotate_a(stack_a, 0);
	reverse_rotate_b(stack_b, 0);
	write(1, "rrr\n", 4);
}
