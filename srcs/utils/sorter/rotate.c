/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:45:17 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/27 11:20:43 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pushswap.h"

static void	_rotate(int *stack, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	tmp = stack[0];
	i = 0;
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size - 1] = tmp;
	return ;
}

void	ra(t_base *base)
{
	_rotate(base->stack_a, base->size_sa);
	ft_printf("ra\n");
	return ;
}

void	rb(t_base *base)
{
	_rotate(base->stack_b, base->size_sb);
	ft_printf("rb\n");
	return ;
}

void	rr(t_base *base)
{
	_rotate(base->stack_a, base->size_sa);
	_rotate(base->stack_b, base->size_sb);
	ft_printf("rr\n");
	return ;
}
