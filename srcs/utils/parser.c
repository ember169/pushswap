/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:40:33 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/22 16:29:03 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

char	**parse_arg(char *arg)
{
	size_t	i;

	i = 0;
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9') \
			&& !(arg[i] == ' ' || arg[i] == '\t'))
			return (throw_error(), NULL);
		i++;
	}
	return (ft_split(arg, ' '));
}
