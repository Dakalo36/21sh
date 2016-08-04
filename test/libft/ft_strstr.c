/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:57:50 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:58:51 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *find_str)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (find_str[k] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + k] == find_str[k])
		{
			k++;
			if (find_str[k] == '\0')
				return (&str[i]);
		}
		k = 0;
		i++;
	}
	return (NULL);
}
