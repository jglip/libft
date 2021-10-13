/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:38:19 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 21:38:28 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static void	find_begin(char const *s1, char const *set, unsigned int *ind)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	ind[0] = -1;
	while (s1[i] != '\0' && ind[0] == -1)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			else if (s1[i] != set[j] && set[j + 1] == '\0')
			{
				ind[0] = i;
				break ;
			}
			j++;
		}
		i++;
	}
}

static void	find_end(char const *s1, char const *set, unsigned int *ind)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(s1) - 1;
	ind[1] = -1;
	while (s1[i] >= 0 && ind[1] == -1)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			else if (s1[i] != set[j] && set[j + 1] == '\0')
			{
				ind[1] = i;
				break ;
			}
			j++;
		}
		i--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	char			*new;
	unsigned int	ind[2];

	find_begin(s1, set, ind);
	find_end(s1, set, ind);
	new = (char *)malloc(sizeof(char) * (ind[1] - ind[0] + 1) + 1);
	if (new == (void *)0)
		return ((void *)0);
	i = 0;
	j = ind[0];
	while (j <= ind[1])
	{
		new[i] = s1[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
