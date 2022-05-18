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
	i = 2;
	stack_a = init_list(argv);
	stack_b = init_list(argv);
	while (argv[i])
	{
		add_back(stack_a, ft_atoi(argv[i]));
		add_back(stack_b, ft_atoi(argv[i]));
		i++;
	}
	print_list(stack_a);
	print_list(stack_b);
	if (argc == 6)
		sort_five_args(stack_a, stack_b);
	print_list(stack_a);
	return (0);
}
