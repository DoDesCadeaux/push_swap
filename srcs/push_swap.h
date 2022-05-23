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
	int		index;
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
t_list	*init_list(void);
void	add_front(t_list *list, int newNb);
void	print_list(t_list *list);
void	add_back(t_list *list, int newNb);
void	delete_first(t_list *list);
void	delete_last(t_list *list);
void	swap_a(t_list *stack_a, int message);
void	swap_b(t_list *stack_b, int message);
void	push_a(t_list *from_stack_b, t_list *to_stack_a);
void	push_b(t_list *from_stack_a, t_list *to_stack_b);
void	rotate_a(t_list *stack_a, int message);
void	rotate_b(t_list *stack_b, int message);
void	reverse_rotate_a(t_list *stack_a, int message);
void	reverse_rotate_b(t_list *stack_b, int message);
void	swap_both(t_list *stack_a, t_list *stack_b);
void	rotate_both(t_list *stack_a, t_list *stack_b);
void	reverse_rotate_both(t_list *stack_a, t_list *stack_b);
void	sort_two_args(t_list *stack_a);
void	sort_three_args(t_list *stack_a, t_list *stack_b);
int		smallest_value(t_list *stack);
int		biggest_value(t_list *stack);
void	sort_four_args(t_list *stack_a, t_list *stack_b);
void	two_last_index(t_list *stack_a, t_list *stack_b, int index);
void	three_last_index(t_list *stack_a, t_list *stack_b, int index);
void	sort_five_args(t_list *stack_a, t_list *stack_b);
void	small_stack(t_list *stack_a, t_list *stack_b, int argc);
int		size_of_list(t_list *list);
int		check_if_ordered(char **argv);


int	get_index(t_list *stack_a, int	node_value);

#endif
