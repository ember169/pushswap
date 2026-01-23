/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:22:54 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/23 17:36:40 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	write_error(void)
{
	write(2, ERRMSG, ft_strlen(ERRMSG));
	return ;
}

void	throw_error(int *arr)
{
	write_error();
	if (arr)
		free(arr);
	exit(1);
}
