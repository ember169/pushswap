/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:34:56 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/27 11:49:17 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pushswap.h"

static void	_swap(int *stack, int size)
{
	int	tmp;

	if (size < 2)
		return ;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
	return ;
}

void	sa(t_base *base)
{
	_swap(base->stack_a, base->size_sa);
	ft_printf("sa\n");
	return ;
}

void	sb(t_base *base)
{
	_swap(base->stack_b, base->size_sb);
	ft_printf("sb\n");
	return ;
}

void	ss(t_base *base)
{
	_swap(base->stack_a, base->size_sa);
	_swap(base->stack_b, base->size_sb);
	ft_printf("ss\n");
	return ;
}
