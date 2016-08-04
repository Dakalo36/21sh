/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:00:14 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:00:39 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *dst, const void *src, size_t n)
{
	const char	*dest;
	const char	*srcs;
	size_t		i;

	i = 0;
	dest = (const char *)dst;
	srcs = (const char *)src;
	while (dest[i] != '\0' && srcs[i] != '\0' && dest[i] == srcs[i]
			&& i < n)
		i++;
	return (dst - src);
}
