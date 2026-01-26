/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:35:43 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/26 14:43:38 by lgervet          ###   ########.fr       */
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

#endif