/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stritery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:56:08 by jglip             #+#    #+#             */
/*   Updated: 2021/10/17 10:11:13 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int j;

	if (s != NULL && f != NULL)
	{
		i = 0;
		j = ft_strlen(s);
		while (i < j)
		{
			f(i, s + i);
			i++;
		}
	}
}
