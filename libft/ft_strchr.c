/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:14:59 by penascim          #+#    #+#             */
/*   Updated: 2023/11/18 18:19:42 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*temps;
	int				i;
	unsigned char	tempc;

	temps = (char *)s;
	i = 0;
	tempc = (unsigned char)c;
	while (temps[i] != '\0')
	{
		if (temps[i] == tempc)
			return ((char *)&s[i]);
		i++;
	}
	if ((!c))
		return (&temps[i]);
	return (NULL);
}
