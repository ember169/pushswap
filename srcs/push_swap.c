/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:36:10 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/24 14:55:08 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(int ac, char **av)
{
	int		*arr;
	int		i;
	// int		j;

	if (ac < 2)
		return (0);

	ft_printf("[ ] Inputed: ");

	arr = malloc(ac * sizeof(int));
	if (!arr)
		return (throw_error(arr, NULL), 0);

	for (i = 1; i < ac; i++)
		ft_printf("%s ", av[i]);
	ft_printf("\n[ ] Parsing arguments...\n\n");

	while (*av)
	{
		*arr = split_argument(*av, arr);
		ft_printf("[x] Argument <%d> parsed, continuing...\n", *arr);
		av++;
		arr++;
	}
	// i = 1;
	// j = 0;
	// while (av[i])
	// {
	// 	str[j] = *ft_split(av[i], ' ');
	// 	while (*str)
	// 	{
	// 		arr[j] = parse_arg(str[j], arr, str);
	// 		str++;
	// 	}
	// 	ft_printf("[x] Argument <%d> parsed, continuing...\n", arr[j]);
	// 	i++;
	// 	j++;
	// }
	*arr = '\0';
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
