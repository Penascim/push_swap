/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:11:24 by penascim          #+#    #+#             */
/*   Updated: 2024/04/19 18:49:35 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

int	check_equal(char **av);
int	check_av(char **av);
int	check_ac(int ac, char **av);

typedef struct s_list
{
	int	value;
	int	index;
	s_list *next;
}	t_list;

#endif
