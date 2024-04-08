/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:36:52 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 17:38:15 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sig;
	int	num;

	sig = 1;
	num = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sig = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num *= 10;
		num += *nptr++ - '0';
	}
	return (num * sig);
}
