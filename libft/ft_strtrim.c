/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:18:44 by penascim          #+#    #+#             */
/*   Updated: 2023/11/15 18:40:42 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*strc;

	if (!s1)
		return (NULL);
	j = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i;
	strc = malloc(sizeof(char) * (len + 1));
	if (strc == NULL)
		return (NULL);
	ft_strlcpy(strc, s1 + i, len + 1);
	return (strc);
}
