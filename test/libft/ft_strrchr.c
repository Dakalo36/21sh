/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:54:03 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:54:30 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ch;

	ch = NULL;
	if (str)
	{
		while (*str)
		{
			if (*str == c)
				ch = (char *)str;
			str++;
		}
		if (*str == c)
			ch = (char *)str;
	}
	return (ch);
}
