# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgervet <42@leogervet.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/16 11:33:29 by lgervet           #+#    #+#              #
#    Updated: 2026/01/26 14:52:23 by lgervet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap
CC          = cc
INCLUDES    = -I includes 
CFLAGS      = -Wall -Werror -Wextra $(INCLUDES) -MMD -MP
RM          = rm -rf

LIBFT_DIR	= includes/libft
LIBFT_NAME	= $(LIBFT_DIR)/libft.a
SRCS_DIR    = ./srcs/
SRCS_FILES  = \
	push_swap.c \
	utils/parser.c \
	utils/sorter.c \
	utils/base_manager.c
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS        = $(SRCS:.c=.o)
DEPS		= $(SRCS:.c=.d)

# --- RÈGLES ---

all: $(NAME)

$(LIBFT_NAME):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFT_NAME) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_NAME) -o $(NAME)

# --- NETTOYAGE ---
clean:
	$(RM) $(OBJS) $(DEPS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

-include $(DEPS)

.PHONY: all fclean clean re