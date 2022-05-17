/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:31:00 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/11 15:31:01 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# include <stdio.h>

typedef struct s_node		t_node;
struct		s_node
{
	int		value;
	t_node	*next;
};

typedef struct s_list		t_list;
struct		s_list
{
	t_node	*first;
};

int		ft_is_digit(char x);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
long	ft_atoi(const char *str);
void	ft_print_error(void);
void	ft_check_all_errors(int argc, char **argv);
t_list	*init_list(char **argv);
void	add_front(t_list *list, int newNb);
void	print_list(t_list *list);
void	add_back(t_list *list, int newNb);
void	delete_first(t_list *list);
void	delete_last(t_list *list);
void	swap(t_list *stack_a);
void	swap_both(t_list *stack_a, t_list *stack_b);

#endif
