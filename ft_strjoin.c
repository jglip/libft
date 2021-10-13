/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:49:52 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 20:56:29 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	l;
	unsigned int	j;
	char			*new;

	i = 0;
	j = 0;
	l = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = (char *)malloc(sizeof(char) * l);
	if (new == (void *)0)
		return ((void *)0);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
