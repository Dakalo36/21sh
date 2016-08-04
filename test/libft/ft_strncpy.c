/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 12:48:57 by jbuys             #+#    #+#             */
/*   Updated: 2016/05/10 15:16:23 by jbuys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int count;

	count = 0;
	while (src[count] != '\0' && n > 0)
	{
		dest[count] = src[count];
		n--;
		count++;
	}
	return (dest);
}
