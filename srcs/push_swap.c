/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:36:10 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/26 14:48:57 by lgervet          ###   ########.fr       */
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

	ft_printf("[x] Stack_a:\n");
	for (int i = 0; base->size_sa > i; i++)
		ft_printf("   - <%d>\n", base->stack_a[i]);
	free_base(base);
	return (0);
}
