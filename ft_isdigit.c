/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:56:40 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 19:58:20 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int ch)
{
	if (ch >= 48 && ch <= 57)
		return (1);
	return (0);
}
