/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 18:37:49 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/22 18:37:55 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*n_dest;
	const unsigned char	*n_src;

	n_dest = (unsigned char *)dest;
	n_src = (unsigned char *)src;
	while (n--)
		*n_dest++ = *n_src++;
	*(++n_dest) = '\0';
	return (dest);
}
