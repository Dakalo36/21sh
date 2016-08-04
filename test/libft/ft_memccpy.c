/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 16:56:32 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 16:56:46 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	count;
	char	*dest;
	char	*srcs;

	count = 0;
	dest = (char *)dst;
	srcs = (char *)src;
	while (count < n)
	{
		dest[count] = srcs[count];
		if (srcs[count] == (unsigned char)c)
			return (dest);
		count++;
	}
	return (dest);
}
