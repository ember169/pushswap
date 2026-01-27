/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:44:59 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/27 11:49:57 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pushswap.h"

/*
** _push:
**     Takes first int of src to put it in first index of dst. Moves stacks 
**	   accordingly (left shift pour src, right shift pour dst).
**
**     @param src  source stack.
**     @param dst  destination stack.
**     @param src_size  source stack size.
**     @param dst_size  destination stack size.
*/
static void	_push(int *src, int *dst, int src_size, int dst_size)
{
	int	src_target;
	int	i;

	if (src_size < 0)
		return ;
	src_target = src[0];

	i = dst_size;
	while (i > 0)
	{
		dst[i] = dst[i - 1];
		i--;
	}
	dst[0] = src_target;
	i = 0;
	while (i < src_size - 1)
	{
		src[i] = src[i + 1];
		i++;
	}
	return ;
}

void	pa(t_base *base)
{
	if (base->size_sb <= 0)
		return ;
	_push(base->stack_b, base->stack_a, base->size_sb, base->size_sa);
	base->size_sa++;
	base->size_sb--;
	ft_printf("pa\n");
	return ;
}

void	pb(t_base *base)
{
	if (base->size_sa <= 0)
		return ;
	_push(base->stack_a, base->stack_b, base->size_sa, base->size_sb);
	base->size_sa--;
	base->size_sb++;
	ft_printf("pb\n");
	return ;
}
