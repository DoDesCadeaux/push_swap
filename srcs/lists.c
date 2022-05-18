/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:51:01 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/11 18:51:03 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_list(char **argv)
{
	t_list	*list;
	t_node	*node;

	list = (t_list *)malloc(sizeof(*list));
	node = (t_node *)malloc(sizeof(*node));
	if (!list || !node)
		ft_print_error();
	node->value = ft_atoi(argv[1]);
	node->next = NULL;
	list->first = node;
	return (list);
}

void	add_front(t_list *list, int newNb)
{
	t_node	*to_add;

	to_add = (t_node *)malloc(sizeof(*to_add));
	if (!list || !to_add)
		ft_print_error();
	to_add->value = newNb;
	to_add->next = list->first;
	list->first = to_add;
}

void	add_back(t_list *list, int newNb)
{
	t_node	*to_add;
	t_node	*temp;

	to_add = (t_node *)malloc(sizeof(*to_add));
	if (!list || !to_add)
		ft_print_error();
	to_add->value = newNb;
	to_add->next = NULL;
	temp = list->first;
	while (temp->next)
		temp = temp->next;
	temp->next = to_add;
}

void	delete_first(t_list *list)
{
	t_node	*to_delete;

	if (!list)
		ft_print_error();
	if (list->first)
	{
		to_delete = list->first;
		list->first = list->first->next;
		free(to_delete);
	}
}

void	delete_last(t_list *list)
{
	t_node	*new_last_node;
	t_node	*to_delete;

	if (!list)
		ft_print_error();
	if (!list->first)
		free(list);
	new_last_node = list->first;
	to_delete = list->first;
	while (to_delete->next)
	{
		new_last_node = to_delete;
		to_delete = to_delete->next;
	}
	new_last_node->next = NULL;
	free(to_delete);
}
