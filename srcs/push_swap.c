/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:50:49 by dduraku           #+#    #+#             */
/*   Updated: 2022/04/11 17:50:50 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	ft_check_all_errors(argc, argv);
	i = 1;
	stack_a = init_list();
	stack_b = init_list();
	while (argv[i])
	{
		add_back(stack_a, ft_atoi(argv[i]));
		i++;
	}
	delete_first(stack_a);
	delete_first(stack_b);
	if (argc < 7)
		small_stack(stack_a, stack_b, argc);

	//===========RADIX==============

	t_node *node;

	node = stack_a->first;
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
	if (argc > 6)
		radix_sort(stack_a, stack_b);
}
