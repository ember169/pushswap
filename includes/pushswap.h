/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:35:43 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/25 16:51:39 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H 

# include "libft/includes/libft.h" 
# include <unistd.h>

typedef struct s_base
{
	int		*stack_a;
	int		*stack_b;
	int		size_sa;
	char	**tmp_split;
}	t_base;

void	free_base(t_base *base);
void	error_exit(t_base *base);
void	fill_stack(t_base *base, int ac, char **av);

#endif