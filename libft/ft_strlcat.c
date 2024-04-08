/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:15:58 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 18:16:02 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ld;
	size_t	ls;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (ls);
	if (ld > size)
		return (ls + size);
	while (ld + i < size - 1 && src[i] != '\0')
	{
		dst[ld + i] = src[i];
		i++;
	}
	dst[ld + i] = '\0';
	return (ld + ls);
}
