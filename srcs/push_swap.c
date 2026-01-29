/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:36:10 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/29 14:39:50 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

/**
 * @brief count how many integers there are in **av
 *
 * @param **av arguments array.
 * @return int number.
 */
int	count_args(char **av)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 1;
	j = 0;
	while (av[i])
	{
		str = ft_split(av[i], ' ');
		if (!str)
			return (-1);
		k = 0;
		while (str[k])
		{
			free(str[k]);
			k++;
			j++;
		}
		i++;
		free (str);
	}
	return (j);
}

int	is_sorted(t_base *base)
{
	int	i;

	if (base->size_sa <= 1)
		return (1);
	i = 0;
	while (i < base->size_sa - 1)
	{
		if (base->stack_a[i] > base->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		arg_nb;
	t_base	*base;

	if (ac < 2)
		return (0);
	arg_nb = count_args(av);
	if (arg_nb <= 0)
		return (write(2, "Error\n", 6));
	base = create_base(arg_nb);
	if (!base)
		error_exit(NULL);
	fill_stack(base, ac, av);
	if (is_sorted(base))
		return (0);
	sort(base);
	free_base(base);
	return (0);
}
