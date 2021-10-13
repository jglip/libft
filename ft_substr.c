/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:18:42 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 21:40:25 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = start;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == (void *)0)
		return ((void *)0);
	while (i < (size_t)start + len - 1)
	{
		new[i - start] = s[i];
		i++;
	}
	new[i - start] = '\0';
	return (new);
}
