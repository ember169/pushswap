/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:35:43 by lgervet           #+#    #+#             */
/*   Updated: 2026/01/24 14:55:38 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H 

# include "libft/includes/libft.h" 
# include <unistd.h>

void	throw_error(int *arr, char **str);
int		split_argument(char *arg, int *arr);

#endif