/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:31:26 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 21:10:04 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *restrict dst,
		const char *restrict src, size_t dstsize)
{
	int	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0')
		{
			if (i <= dstsize - 2)
				dst[i] = src[i];
			else if (i == dstsize - 1)
				dst[i] = '\0';
			i++;
		}
	}
	return (i);
}
