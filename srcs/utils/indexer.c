/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:37:30 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/29 14:30:27 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

static void	_bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return ;
}

/*
** _index_array:
**     Search each stack_a's value in arr and replace it by its index
**     @param base  base
**     @param arr   temporary index array
*/
static void	_index_array(t_base *base, int *arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < base->size_sa)
	{
		j = 0;
		while (j < base->size_sa)
		{
			if (base->stack_a[i] == arr[j])
			{
				base->stack_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return ;
}

void	index_stack(t_base *base)
{
	int	*tmp;
	int	i;

	tmp = malloc(sizeof(int) * base->size_sa);
	if (!tmp)
		error_exit(base);
	i = 0;
	while (i < base->size_sa)
	{
		tmp[i] = base->stack_a[i];
		i++;
	}
	_bubble_sort(tmp, base->size_sa);
	_index_array(base, tmp);
	free(tmp);
	return ;
}
