/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:40:10 by jglip             #+#    #+#             */
/*   Updated: 2021/10/16 19:03:30 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	**ft_split(char const *s, char c)
// {
// 	int     strlen;
//     int     i;
//     int     indexofstr;
//     int     lensubstr;
//     int     qstr;
//     char    **arr;

// 	i = 0;
//     strlen = 0;
//     qstr = 0;
//     while (strlen != '\0')
//     {
// 		if (s[strlen] == c)
// 			qstr++;
// 		strlen++;
// 	}
// 	**arr = (char *)malloc(sizeof(char) * qstr + 1);
// 	lensubstr = 0;
// 	indexofstr = 0;
// 	while (i != '\0')
// 	{
// 		if (s[i] != c)
// 			lensubstr += 1;
// 		else if (s[i] == c)
// 		{
// 			arr[indexofstr] = (char *)malloc(sizeof(char) * lensubstr + 1);
// 			lensubstr = 0;
// 			indexofstr += 1;
// 		}
// 		i++;
// 	}
// 	i = 0;
//     lensubstr = 0;
//     indexofstr = 0;
//     while (i != '\0')
//     {
//         if (s[i] != c)
//         {
//             arr[indexofstr][lensubstr] = s[i];
//             lensubstr += 1;
//         }
//         else if (s[i] == c)
//         {
//             lensubstr = 0;
//             indexofstr += 1;
//         }
//         i++;
//     }
//     return (arr);
// }

static size_t	ft_wordlen(char const *s, char c)
{
	size_t len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

static size_t	ft_count_word(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static char		*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*result;

	if (!(result = (char *)malloc(sizeof(char) * (n + 1))))
		return (0);
	i = 0;
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

static void		ft_free_arr(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
}

/*
** ft_split - split a string
*/

char			**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	wordlen;
	size_t	i;

	count = ft_count_word(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (count + 1))))
		return (0);
	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		wordlen = ft_wordlen(s, c);
		if (!(result[i] = ft_strndup(s, wordlen)))
		{
			ft_free_arr(result, i - 1);
			return (0);
		}
		s += wordlen;
		i++;
	}
	result[count] = 0;
	return (result);
}