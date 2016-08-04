/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 18:01:50 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 18:02:23 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t		a;
	size_t		b;
	size_t		i;
	char		*str;

	b = ft_strlen(s) - 1;
	if (s[0] != ' ' && s[0] != '\n' && s[0] != '\t')
	{
		if (s[b] != ' ' && s[b] != '\n' && s[b] != '\t')
			return (ft_strcpy(str = ft_strnew(ft_strlen(s)), (char *)s));
	}
	a = 0;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a++;
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b--;
	str = ft_strnew((b - a) + 1);
	i = 0;
	while (a <= b)
	{
		str[i] = s[a];
		a++;
		i++;
	}
	return (str);
}
