/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:36:10 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/20 15:31:51 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_args(char *arg)
{
	int	is_valid;

	is_valid = 0;
	return (is_valid);
}

int	manage_args(char *arg)
{
	
}

int	main(int ac, char **av)
{
	int	*args;

	if (ac < 2)
		return ;
	if (!valid_args(av[1]))
	{
		print_err("Error\n");
		return (0);
	}
	manage_args(av[1]);
	return (1);
}
