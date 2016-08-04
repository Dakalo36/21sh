/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:40:57 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:41:10 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		n;
	char		*dest;
	const char	*srcs;

	dest = dst;
	n = size;
	srcs = src;
	while (*dest != '\0')
		dest++;
	if (n == 0)
		return (ft_strlen(dst) + ft_strlen(srcs));
	while (*srcs != '\0' && n-- != 0 && (size_t)ft_strlen(dest) > size)
	{
		*dst++ = *srcs;
		srcs++;
	}
	*dest = '\0';
	return (ft_strlen(dst) + ft_strlen(srcs));
}
