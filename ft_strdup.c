/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:38:29 by jglip             #+#    #+#             */
/*   Updated: 2021/10/16 19:03:55 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	l;
	size_t	i;

	i = 0;
	l = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * (l + 1));
	if (!dup)
		return (NULL);
	while (i < l)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// char	*ft_strdup(const char *s)
// {
// 	size_t	slen;
// 	char	*result;

// 	slen = ft_strlen(s);
// 	if (!(result = (char *)malloc(sizeof(char) * (slen + 1))))
// 		return (0);
// 	slen = 0;
// 	while (s[slen])
// 	{
// 		result[slen] = s[slen];
// 		slen++;
// 	}
// 	result[slen] = '\0';
// 	return (result);
// }
