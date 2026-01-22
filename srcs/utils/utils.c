/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:33:09 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/22 15:51:07 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

/**
 * @brief converts inputed string to integer arrays (ignore all but ints)
 *
 * @param s string to convert
 * @return converted array
 */
int	*str_to_arrint(char *s)
{
	size_t	i;
	size_t	j;
	int		*arr;

	arr = malloc(ft_strlen(s) * sizeof(int));
	if (!arr)
	{
		throw_error(ERRMSG);
		return (0);
	}
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			arr[j] = s[i] - '0';
			j++;
		}
		i++;
	}
	return (arr);
}


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
