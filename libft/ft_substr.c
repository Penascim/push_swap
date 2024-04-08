/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:18:50 by penascim          #+#    #+#             */
/*   Updated: 2023/11/18 18:47:57 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*stemp;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	stemp = (char *)malloc(sizeof(char) * len + 1);
	if (!stemp)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
		stemp[i++] = s[start++];
	stemp[i] = '\0';
	return (stemp);
}
