/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:49:43 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 20:46:10 by jglip            ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c)
		{
			res = s[i];
			break ;
		}
		i++;
	}
	return (res);
}
