/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:17:52 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 18:17:55 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*srct;
	char	*dstt;
	size_t	i;

	srct = (char *)src;
	dstt = dst;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && size - 1 > i)
	{
		dstt[i] = srct[i];
		i++;
	}
	dstt[i] = '\0';
	return (ft_strlen(src));
}
