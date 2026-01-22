/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:36:10 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/22 16:57:18 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

/**
 * @brief Checks arguments validity
 *
 * @param arg string inputed by user
 * @return 	  1 if valid / 0 if not
 */
// int	valid_args(char *arg)
// {
// 	(void)arg;
// 	int	is_valid;

// 	is_valid = 0;
// 	return (is_valid);
// }


// int	manage_args(char *arg)
// {
// 	int	*arr;
// 	int	arr_len;

// 	arr = parse_arg(arg);
// 	if (is_sorted(arr))
// 		return (print_and_exit(arr));
// 	arr_len = sizeof(arr) / sizeof(int);
// 	// if (arr_len == 2)
// 	// 	fun1(arr);
// 	// else if (arr_len == 3)
// 	// 	fun2(arr);
// 	// else
// 	// 	fun3(arr);
// 	return (1);
// }	

// int	main(int ac, char **av)
// {
// 	int	*args;

// 	if (ac < 2)
// 		return ;
// 	if (!valid_args(av[1]))
// 		return (throw_error(ERRMSG));
// 	manage_args(av[1]);
// 	return (1);
// }

int	main(int ac, char **av)
{
	char	**str;
	int		i;

	if (ac < 2)
		return (0);

	//DEBUG PRINT
	ft_printf("[ ] Inputed: ");
	for (i = 1; i < ac; i++)
		ft_printf("%s ", av[i]);
	ft_printf("\n");

	str = malloc(ac * sizeof(*str));
	if (!str)
		return (throw_error(), 0);
	i = 1;
	while (i < ac)
	{
		str[i] = *parse_arg(av[i]);
		i++;
	}
	i = 0;
	ft_printf("test\n", str);
	while (str[i])
	{
		ft_printf("%s\n", str[i]);
		i++;
	}
	return (1);
}
