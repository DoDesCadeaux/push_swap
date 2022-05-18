/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:38:18 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/18 15:38:20 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *list)
{
	t_node	*this_node;

	if (!list)
		ft_print_error();
	this_node = list->first;
	while (this_node)
	{
		printf("[%d]->", this_node->value);
		this_node = this_node->next;
	}
	printf("NULL\n");
}
