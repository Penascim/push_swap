/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:39:21 by penascim          #+#    #+#             */
/*   Updated: 2024/04/10 19:25:47 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	check_equal(char **av)
{
	int		i;
	int		j;
	char	**str;

	str = av[1];
	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_av(char **av)
{
	int	i;
	int	j;
	int	number;

	i = 0;
	j = 1;
	while (av[j])
	{
		i = 0;
		number = ft_atoi(av[j]);
		if (number > 2147483647)
			return (0);
		if (number < -2147483647)
			return (0);
		while (av[j][i])
		{
			if (ft_isdigit(av[j][i]))
				i++;
			else
				return (0);
		}
		j++;
	}
	return (1);
}

/*
malloc below
*/
int	check_ac(int ac, char **av)
{
	char	**str;

	str = av;
	if (!(av[0]))
		return (0);
	if (ac < 2)
		return (0);
	if (ac > 2)
		if (check_av(str) == 0)
			return (0);
	if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		if (check_av(str) == 0)
			return (0);
		else
			check_equal(str);
	}
	return (1);
}
