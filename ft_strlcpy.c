/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:31:26 by jglip             #+#    #+#             */
/*   Updated: 2021/10/18 20:04:42 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst,
		const char *src, size_t dstsize)
{
	size_t	i;
	char	*str1;

	i = 0;
	str1 = (char *)src;
	if (!src)
		return (0);
	if (dstsize > 0)
	{
		while (str1[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = str1[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(str1));
}
