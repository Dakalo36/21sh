/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:50:11 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:50:22 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*str;
	size_t	count;

	count = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if ((void *)size == NULL)
		return (NULL);
    free(str);
	return ((char *)str);
}
