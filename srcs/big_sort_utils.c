/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:26:47 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/26 18:26:49 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_index_sort(t_list *stack_a, t_node *node)
{
	while (node)
	{
		node->index = get_index(stack_a, node->value);
		node = node->next;
	}
	node = stack_a->first;
	while (node)
	{
		node->value = node->index;
		node = node->next;
	}
}

void	do_radix(int max_bits, int size, t_list *a, t_list *b)
{
	int	j;
	int	k;
	int	top_num;

	j = 0;
	while (j < max_bits)
	{
		k = 0;
		while (k < size)
		{
			top_num = a->first->value;
			if (((top_num >> j) & 1) == 1)
				rotate_a(a, 1);
			else
				push_b(a, b);
			k++;
		}
		while (b->first != NULL)
			push_a(b, a);
		j++;
	}
}
