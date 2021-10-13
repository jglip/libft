/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:31:26 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 21:07:32 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *restrict dst,
		const char *restrict src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (dstsize > 0)
	{
		while (dst[j] != '\0')
			j++;
		while (src[i] != '\0')
		{
			if (i <= dstsize - j - 2)
				dst[j + i] = src[i];
			else if (i == dstsize - j - 1)
				dst[j + i] = '\0';
			i++;
		}
	}
	return (i + j);
}
