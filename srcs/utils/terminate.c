/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:40:22 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/25 16:49:51 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	free_base(t_base *base)
{
	int	i;

	if (base->stack_a)
		free(base->stack_a);
	if (base->stack_b)
		free(base->stack_b);
	if (base->tmp_split)
	{
		i = 0;
		while (base->tmp_split[i])
		{
			free(base->tmp_split[i]);
			i++;
		}
		free(base->tmp_split);
	}
	return ;
}

void	error_exit(t_base *base)
{
	write(2, "Error\n", 7);
	free_base(base);
	exit(1);
}
