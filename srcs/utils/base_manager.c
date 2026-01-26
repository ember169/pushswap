/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:33:09 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/26 14:51:05 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

/*
** create_base:
**     Creates the base aand allocates different needed data size
**
**     @param stack_size  number of argument to be allocated
**     @return base pointer adress
*/
t_base	*create_base(int stack_size)
{
	t_base	*base;

	base = (t_base *)malloc(sizeof(t_base));
	if (!base)
		return (NULL);
	base->stack_a = NULL;
	base->stack_b = NULL;
	base->tmp_split = NULL;
	base->size_sa = 0;
	base->size_sb = 0;
	base->stack_a = malloc(stack_size * sizeof(int));
	if (!base->stack_a)
		return (free_base(base), NULL);
	base->stack_b = malloc(stack_size * sizeof(int));
	if (!base->stack_b)
		return (free_base(base), NULL);
	return (base);
}

void	free_split(char **str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

/*
** free_base:
**     Frees all of the base
**
**     @param base  base pointer address.
*/
void	free_base(t_base *base)
{
	if (!base)
		return ;
	if (base->stack_a)
		free(base->stack_a);
	if (base->stack_b)
		free(base->stack_b);
	if (base->tmp_split)
		free_split(base->tmp_split);
	free(base);
	return ;
}

void	error_exit(t_base *base)
{
	write(2, "Error\n", 6);
	free_base(base);
	exit(1);
}
