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
		i++;
	}
	if (argc < 7)
		small_stack(stack_a, stack_b, argc);

	//============================================


}
