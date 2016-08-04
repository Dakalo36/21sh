/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:45:17 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:45:30 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	return (dst);
}
