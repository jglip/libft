/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:28:37 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 21:15:40 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		l;
	int		i;
	char	*newstr;

	l = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * l + 1);
	if (!newstr)
		return ((void *)0);
	i = 0;
	while (i < l)
	{
		newstr = f(i, s[i]);
		i++;
	}
	return (newstr);
}
