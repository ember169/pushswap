/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:40:33 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/26 14:49:04 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

int	validate_chars(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	validate_int(t_base *base, long value, int current_position)
{
	int	i;

	if (value > INT_MAX || value < INT_MIN)
		return (0);
	i = 0;
	while (i < current_position)
	{
		if (base->stack_a[i] == value)
			return (0);
		i++;
	}
	return (1);
}

void	fill_stack(t_base *base, int ac, char **av)
{
	int		i;
	int		k;
	long	value;

	i = 1;
	while (i < ac)
	{
		base->tmp_split = ft_split(av[i++], ' ');
		if (!base->tmp_split)
			error_exit(base);
		k = 0;
		while (base->tmp_split[k])
		{
			if (!validate_chars(base->tmp_split[k]))
				error_exit(base);
			value = ft_atol(base->tmp_split[k++]);
			if (!validate_int(base, value, base->size_sa))
				error_exit(base);
			base->stack_a[base->size_sa++] = (int)value;
		}
		free_split(base->tmp_split);
		base->tmp_split = NULL;
	}
	return ;
}
