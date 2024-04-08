/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:39:21 by penascim          #+#    #+#             */
/*   Updated: 2024/04/08 20:01:46 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_atoi(str[j]) >= 2147483648)
		return ("Error");
	while (str[j])
	{
		i = 0;
		while (str[j][i])
		{
			if (is_digit(str[j][i]))
				i++;
			else
				return ("Error");
		}
		i = 0;
	}
}
