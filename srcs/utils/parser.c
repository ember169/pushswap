/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:40:33 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/23 17:37:41 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

/**
 * @brief filters and parse a single argument string
 * @param *arg argument string to parse
 * @return pointer to argument converted as int
 */
int	parse_arg(char *arg, int *arr)
{
	size_t	i;
	int		ret;

	ft_printf("[ ] Checking argument \"%s\"...\n", arg);
	i = 0;
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9')
			&& !(arg[i] == ' ' || arg[i] == '\t' || arg[i] == '-'))
			throw_error(arr);
		i++;
	}
	ft_printf("[ ] Argument \"%s\" considered valid.\n", arg);
	ret = ft_atoi(arg);
	ft_printf("[ ] Argument \"%s\" converted in <%d>.\n", arg, ret);
	return (ret);
}
