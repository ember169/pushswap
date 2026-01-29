/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:45:00 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/29 14:25:44 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*  FUNCTION: sort_radix                                                      */
/*                                                                            */
/*  1. Finds out how many bits the biggest number has.                        */
/*  2. Loops through the stack to find out if current bit is 0 or 1.          */
/*		a. if current bit is 1: keep it in stack (ra).                        */
/*		b. if current bit is 0: put it in stack b (pb).						  */
/*	3. Take everything back from stack b. 									  */
/*                                                                            */
/*  @param t_base  base.                                                      */
/*                                                                            */
/*  Example:                                                                  */
/*     sort_radix(base);					                                  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	sort_radix(t_base *base)
{
	int	i;
	int	j;
	int	size;
	int	max_bit_nb;

	size = base->size_sa;
	max_bit_nb = 0;
	while (((size - 1) >> max_bit_nb) != 0)
		max_bit_nb++;
	i = 0;
	while (i < max_bit_nb)
	{
		j = 0;
		while (j < size)
		{
			if ((base->stack_a[0] >> i) & 1)
				ra(base);
			else
				pb(base);
			j++;
		}
		while (base->size_sb > 0)
			pa(base);
		i++;
	}
}
