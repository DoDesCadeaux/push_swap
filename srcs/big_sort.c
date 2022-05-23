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

int	get_index(t_list *stack_a, int	n)
{
	t_node *node;
	int	index;

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
