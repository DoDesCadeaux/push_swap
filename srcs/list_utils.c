/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:25:22 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/18 17:25:24 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_value(t_list *stack)
{
	t_node	*temp;
	int		min;
	int		index;

	temp = stack->first;
	min = INT_MAX;
	index = 0;
	while (temp != NULL)
	{
		if (min > temp->value)
			min = temp->value;
		temp = temp->next;
	}
	temp = stack->first;
	while (min != temp->value)
	{
		index++;
		temp = temp->next;
	}
	return (index);
}

int	biggest_value(t_list *stack)
{
	t_node	*temp;
	int		max;

	max = INT_MIN;
	temp = stack->first;
	while (temp != NULL)
	{
		if (max < temp->value)
			max = temp->value;
		temp = temp->next;
	}
	return (max);
}

int	size_of_list(t_list *list)
{
	t_node	*node;
	int		size;

	if (!list)
		exit(EXIT_FAILURE);
	size = 0;
	node = list->first;
	while (node != NULL)
	{
		size++;
		node = node->next;
	}
	return (size);
}
