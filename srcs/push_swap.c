/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:36:10 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/23 17:37:57 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(int ac, char **av)
{
	int		*arr;
	int		i;
	int		j;

	if (ac < 2)
		return (0);

	//DEBUG PRINT
	ft_printf("[ ] Inputed: ");
	for (i = 1; i < ac; i++)
		ft_printf("%s ", av[i]);
	ft_printf("\n[ ] Parsing arguments...\n\n");

	arr = malloc(ac * sizeof(int));
	if (!arr)
		return (throw_error(arr), 0);
	i = 1;
	j = 0;
	while (av[i])
	{
		arr[j] = parse_arg(av[i], arr);
		ft_printf("[x] Argument <%d> parsed, continuing...\n", arr[j]);
		i++;
		j++;
	}
	arr[j] = '\0';
	ft_printf("\n[x] All arguments parsed:\n\n");
	i = 0;
	while (arr[i])
	{
		ft_printf("%d\n", arr[i]);
		i++;
	}
	free (arr);
	return (1);
}
