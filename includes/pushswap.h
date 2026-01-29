/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:35:43 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/29 14:30:35 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/includes/libft.h" 
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_base
{
	int		*stack_a;
	int		*stack_b;
	int		size_sa;
	int		size_sb;
	char	**tmp_split;
}	t_base;

t_base	*create_base(int stack_size);
void	free_base(t_base *base);
void	free_split(char **str);
void	error_exit(t_base *base);
void	fill_stack(t_base *base, int ac, char **av);
void	sort(t_base *base);
void	pa(t_base *base);
void	pb(t_base *base);
void	sa(t_base *base);
void	sb(t_base *base);
void	ss(t_base *base);
void	ra(t_base *base);
void	rb(t_base *base);
void	rr(t_base *base);
void	rra(t_base *base);
void	rrb(t_base *base);
void	rrr(t_base *base);
void	index_stack(t_base *base);
void	sort_radix(t_base *base);

#endif
