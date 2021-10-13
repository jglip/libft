/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:09:19 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 21:27:23 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = ft_strlen(s);
	res = 0;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			res = s[i];
			break ;
		}
		i--;
	}
	return (res);
}
