/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:22:07 by dnematan          #+#    #+#             */
/*   Updated: 2016/07/10 16:21:55 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t		i;
	size_t		k;
	char		*str;

	i = 0;
	k = 0;
	str = (char *)ft_memalloc(ft_strlen(dst) + ft_strlen(src) + 1);
	while (dst[i] != '\0')
		i++;
	while (src[k] != '\0')
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	free(str);
	return (dst);
}
