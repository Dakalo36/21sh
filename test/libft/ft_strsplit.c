/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:55:36 by dnematan          #+#    #+#             */
/*   Updated: 2016/07/09 10:48:52 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	int		cnt;
	int		wcnt;
	
	cnt = 0;
	wcnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] != c && (str[cnt + 1] == c ||
							str[cnt + 1] == '\0'))
			wcnt++;
		cnt++;
	}
	 return (wcnt);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**strs;
	size_t	scnt;
	size_t	strcnt;
	size_t	start;
	//size_t	end;

	scnt = 0;
	strcnt = 0;
	start = 0;
	strs = (char **)malloc(sizeof(*strs) * (word_count(s, c) + 1));
	while (s[scnt] != '\0')
	{
		if (s[scnt] != c)
		{
			if (s[scnt - 1] == c || s[scnt - 1] == '\0')
				start = scnt;
			if (s[scnt + 1] == c || s[scnt + 1] == '\0')
			{
				//end = scnt - start + 1;
				strs[strcnt++] = ft_strsub(s, start, scnt - start + 1);
				}
		}
		scnt++;
	}
	strs[strcnt] = NULL;
	return (strs);
}
