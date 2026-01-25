/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:40:33 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/24 14:55:59 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

/**
 * @brief filters and parse a single argument string
 * @param *arg  argument string to parse
 * @param *arr  array to free in case of error
 * @param **str str to free in case of error
 * @return pointer to argument converted as int
 */
int	parse_argument(char *arg, int *arr, char **str)
{
	size_t	i;
	int		ret;

	ft_printf("[ ] Checking argument \"%s\"...\n", arg);
	i = 0;
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9')
			&& !(arg[i] == ' ' || arg[i] == '\t' || arg[i] == '-'))
			throw_error(arr, str);
		i++;
	}
	ft_printf("[ ] Argument \"%s\" considered valid.\n", arg);
	ret = ft_atoi(arg);
	ft_printf("[ ] Argument \"%s\" converted in <%d>.\n", arg, ret);
	return (ret);
}

/**
 * @brief splits arguments and pass them to parse_arg 1:1
 * @param *arg  argument string to parse
 * @param *arr  array to free in case of error
 * @param **str str to free in case of error
 * @return pointer to argument converted as int
 */
int	split_argument(char *arg, int *arr)
{
	char	**str;
	int		ret;

	str = malloc(sizeof(arg));
	if (!str)
		return (throw_error(arr, NULL), 0);
	str = ft_split(arg, ' ');
	ret = 0;
	while (*str)
	{
		ret = parse_argument(*str, arr, str);
		str++;
	}
	return (ret);
}
