/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:13:59 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 18:14:01 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tdest;
	const unsigned char	*tsrc;

	tdest = (unsigned char *)dest;
	tsrc = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	else if (dest < src)
		while (n--)
			*tdest++ = *tsrc++;
	else
		while (n--)
			tdest[n] = tsrc[n];
	return (dest);
}
