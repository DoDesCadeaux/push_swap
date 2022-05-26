/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   areArgsValid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:30:10 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/11 15:30:11 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_args(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if ((ft_is_digit(argv[j][i])) ||
				(argv[j][0] == '-' && ft_is_digit(argv[j][i + 1])))
				i++;
			else
				ft_print_error();
		}
		j++;
	}
	if (argc <= 1)
		exit(EXIT_FAILURE);
}

static void	ft_check_double(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (argv[i])
	{
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				ft_print_error();
			j++;
		}
		i++;
		j = i + 1;
	}
}

static void	ft_check_min_max(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) > 11)
			ft_print_error();
		else if (ft_atoi(argv[i]) > 2147483647)
			ft_print_error();
		else if (ft_atoi(argv[i]) < INT_MIN)
			ft_print_error();
		i++;
	}
}

int	check_if_ordered(char **argv)
{
	int	i;
	int	comparator_before;

	i = 2;
	while (argv[i])
	{
		comparator_before = ft_atoi(argv[i - 1]);
		if (comparator_before < ft_atoi(argv[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_check_all_errors(int argc, char **argv)
{
	if (argc == 1 || argv[1] == NULL)
		exit(EXIT_SUCCESS);
	ft_check_args(argc, argv);
	ft_check_double(argv);
	ft_check_min_max(argv);
	if (check_if_ordered(argv) == 1)
		exit(EXIT_SUCCESS);
}
