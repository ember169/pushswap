/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:35:43 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/23 17:37:39 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H 

# define ERRMSG ("Error\n")

# include "libft/includes/libft.h" 
# include <unistd.h>

void	throw_error(int *arr);
int		parse_arg(char *arg, int *arr);

#endif