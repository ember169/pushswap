/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:48:06 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/29 13:45:24 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	sort_three(t_base *base)
{
	int	*arr;

	arr = base->stack_a;
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] < arr[2])
		sa(base);
	else if (arr[0] > arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
	{
		sa(base);
		rra(base);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] > arr[2])
		ra(base);
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] < arr[2])
	{
		sa(base);
		ra(base);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
		rra(base);
}

/*
** move_min_to_top:
**     Finds smaller int index and moves it to top of stack_a
**     @param base  base
*/
void	move_min_to_top(t_base *base)
{
	int	min_position;
	int	i;

	i = 0;
	min_position = 0;
	while (i < base->size_sa)
	{
		if (base->stack_a[i] < base->stack_a[min_position])
			min_position = i;
		i++;
	}
	if (min_position <= base->size_sa / 2)
	{
		while (min_position--)
			ra(base);
	}
	else
	{
		while (min_position < base->size_sa)
		{
			rra(base);
			min_position++;
		}
	}
	return ;
}

void	invoke_radix(t_base *base)
{
	index_stack(base);
	sort_radix(base);
	return ;
}

/*
** sort:
**     Sort values
**     @param base  base.
*/
void	sort(t_base *base)
{
	if (base->size_sa == 3)
		sort_three(base);
	else if (base->size_sa == 4)
	{
		move_min_to_top(base);
		pb(base);
		sort_three(base);
		pa(base);
	}
	else if (base->size_sa == 5)
	{
		move_min_to_top(base);
		pb(base);
		move_min_to_top(base);
		pb(base);
		sort_three(base);
		pa(base);
		pa(base);
	}
	else
		invoke_radix(base);
	return ;
}
