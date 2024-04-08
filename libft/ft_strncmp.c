/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:18:19 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 18:40:00 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && n > i)
	{
		if (str1[i] == str2[i])
			i++;
		else if ((str1[i] - str2[i]) > 0)
			return (1);
		else if ((str1[i] - str2[i]) < 0)
			return (-1);
	}
	return (0);
}
