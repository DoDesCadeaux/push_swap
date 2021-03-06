/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argsUtils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:36:28 by dduraku           #+#    #+#             */
/*   Updated: 2022/05/11 15:36:32 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_digit(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_forward(char *str, int *signe, int *neg)
{
	int	i;

	i = 0;
	*neg = 1;
	*signe = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*neg = -1;
		i++;
		*signe += 1;
	}
	return (i);
}

long	ft_atoi(const char *str)
{
	int						i;
	int						signe;
	int						neg;
	unsigned long long		res;
	char					*forward;

	forward = (char *)str;
	res = 0;
	i = ft_forward(forward, &signe, &neg);
	if (signe > 1)
		return (0);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	if (neg == -1 && res - 1 > LLONG_MAX)
		return (0);
	if (neg == 1 && res > LLONG_MAX)
		return (-1);
	return (res * neg);
}
