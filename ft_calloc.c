/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:51:53 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 20:06:15 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t count, size_t size)
{
	void	*arr;

	arr = malloc(count * size);
	if (arr == (void *)0)
		return ((void *)0);
	ft_bzero(arr, count * size);
	return (arr);
}
