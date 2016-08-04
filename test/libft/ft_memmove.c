/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:04:31 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:04:58 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*dest;
	unsigned char	*srcs;

	i = 0;
	dest = (unsigned char *)dst;
	srcs = (unsigned char *)src;
	while (srcs[i] != '\0' && n > 0)
	{
		if (n > 0)
		{
			dest[i] = srcs[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dst);
}
