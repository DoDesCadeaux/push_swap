/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:04:52 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/19 19:04:53 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_list *stack_a, int n)
{
	t_node	*node;
	int		index;

	node = stack_a->first;
	index = 0;
	while (node != NULL)
	{
		if (node->value < n)
			index++;
		node = node->next;
	}
	return (index);
}

void	radix_sort(t_list *stack_a, t_list *stack_b)
{
	int	j;
	int	k;
	int	size;
	int	max_num;
	int	max_bits;
	int	top_num;

	j = 0;
	size = size_of_list(stack_a);
	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (j < max_bits)
	{
		k = 0;
		while (k < size)
		{
			top_num = stack_a->first->value;
			if (((top_num >> j) & 1) == 1)
				rotate_a(stack_a, 1);
			else
				push_b(stack_a, stack_b);
			k++;
		}
		while (stack_b->first != NULL)
			push_a(stack_b, stack_a);
		j++;
	}
}
