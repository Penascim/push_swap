/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:18:38 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 18:18:40 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*temps;
	int				i;
	unsigned char	tempc;

	temps = (char *)s;
	i = ft_strlen(s);
	tempc = (unsigned char)c;
	while (i >= 0)
	{
		if (temps[i] == tempc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
