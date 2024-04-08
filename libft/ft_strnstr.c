/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:18:28 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 18:40:26 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if ((!big || !little) && !len)
		return (NULL);
	if (!(*little))
		return ((char *)big);
	while ((big[i] != '\0') && (i < len))
	{
		if (little[j] == big[i])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i - j]);
		}
		else
		{
			i = (i - j) + 1;
			j = 0;
		}
	}
	return (NULL);
}
