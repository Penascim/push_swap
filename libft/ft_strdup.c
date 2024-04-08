/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:15:09 by penascim          #+#    #+#             */
/*   Updated: 2023/11/18 18:19:52 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*src2;
	char			*new_str;
	char			*pointer;
	unsigned int	count;

	src2 = (char *)src;
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	count = ft_strlen(src);
	if (!new_str)
		return (NULL);
	pointer = new_str;
	while (count--)
	{
		*new_str++ = *src2++;
	}
	*new_str = '\0';
	return (pointer);
}
