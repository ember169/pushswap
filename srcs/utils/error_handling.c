/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:22:54 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/24 14:30:45 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	write_error(void)
{
	write(2, "Error\n", 7);
	return ;
}

void	throw_error(int *arr, char **str)
{
	int	i;

	write_error();
	if (arr)
		free(arr);
	if (str)
	{
		i = 0;
		while (str[i])
		{
			free (str[i]);
			i++;
		}
	}
	exit(1);
}
