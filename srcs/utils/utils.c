/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:33:09 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/23 13:39:08 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"



int	is_sorted(int arr[])
{
	int	is_sorted;

	(void)arr;
	is_sorted = 0;
	return (is_sorted);
}

void	print_and_exit(int *arr)
{
	ft_printf("%s", (char *)arr);
	free(arr);
	return ;
}
