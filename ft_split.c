/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglip <jglip@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:40:10 by jglip             #+#    #+#             */
/*   Updated: 2021/10/13 20:38:32 by jglip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	int     strlen;
    int     i;
    int     indexofstr;
    int     lensubstr;
    int     qstr;
    char    **arr;

	i = 0;
    strlen = 0;
    qstr = 0;
    while (strlen != '\0')
    {
		if (s[strlen] == c)
			qstr++;
		strlen++;
	}
	*arr = (char *)malloc(sizeof(char) * qstr + 1);
	lensubstr = 0;
	indexofstr = 0;
	while (i != '\0')
	{
		if (s[i] != c)
			lensubstr += 1;
		else if (s[i] == c)
		{
			arr[indexofstr] = (char *)malloc(sizeof(char) * lensubstr + 1);
			lensubstr = 0;
			indexofstr += 1;
		}
		i++;
	}
	i = 0;
    lensubstr = 0;
    indexofstr = 0;
    while (i != '\0')
    {
        if (s[i] != c)
        {
            arr[indexofstr][lensubstr] = s[i];
            lensubstr += 1;
        }
        else if (s[i] == c)
        {
            lensubstr = 0;
            indexofstr += 1;
        }
        i++;
    }
    return (arr);
}
