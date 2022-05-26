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
	t_node	*node;
	int		size;
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
	size = size_of_list(stack_a);
	node = stack_a->first;
	do_index_sort(stack_a, node);
	if (argc > 6)
		radix_sort(stack_a, stack_b, size);
	return (0);
}
