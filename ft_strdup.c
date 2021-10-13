/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:38:29 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 20:51:14 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s1)
{
	char	*dup;
	int		l;
	int		i;

	i = 0;
	l = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * l + 1);
	if (dup == (void *)0)
		return ((void *)0);
	while (i < l)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
