/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:45:59 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/27 11:21:59 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pushswap.h"

static void	_rev_rotate(int *stack, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	tmp = stack[size - 1];
	i = size - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
	return ;
}

void	rra(t_base *base)
{
	_rev_rotate(base->stack_a, base->size_sa);
	ft_printf("rra\n");
	return ;
}

void	rrb(t_base *base)
{
	_rev_rotate(base->stack_b, base->size_sb);
	ft_printf("rrb\n");
	return ;
}

void	rrr(t_base *base)
{
	_rev_rotate(base->stack_a, base->size_sa);
	_rev_rotate(base->stack_b, base->size_sb);
	ft_printf("rrr\n");
	return ;
}
