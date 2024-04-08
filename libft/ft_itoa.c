/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:13:18 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 18:38:45 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_numbers(long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	*ft_put_nbr_in_str(long nb, char *result, int i)
{
	if (nb < 0)
	{
		nb *= -1;
		result[0] = '-';
	}
	while (nb > 9)
	{
		result[i--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	result[i] = nb + 48;
	return (result);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	str_index;

	nb = (long)n;
	str_index = ft_count_numbers(nb);
	str = ft_calloc(sizeof(char), str_index + 1);
	if (!str)
		return (NULL);
	ft_put_nbr_in_str(nb, str, str_index - 1);
	return (str);
}
