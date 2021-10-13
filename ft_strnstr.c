/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:38:41 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 21:22:33 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack,
		const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	res = haystack[0];
	while (haystack[i] != 0)
	{
		if (haystack[i] == needle[0])
		{
			res = haystack[i];
			j = 1;
			while (j <= len - 2)
			{
				if (haystack[i + j] != needle[j])
					break;
				if (j == len - 2)
					return (res);
				j++;
			}
		}
		i++;
	}
	return (res);
}
