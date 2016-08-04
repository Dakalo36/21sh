/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:51:42 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/15 17:09:12 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *find_str, size_t len)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (find_str[k] == '\0')
		return (str);
	while (str[i] != '\0' && len > 0)
	{
		while (str[i + k] == find_str[k])
		{
			k++;
			if (find_str[k] == '\0')
				return (&str[i]);
		}
		len--;
		i++;
	}
	return (NULL);
}
