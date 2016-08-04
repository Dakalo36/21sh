/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:43:17 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:43:28 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f) (char))
{
	char *str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str && f)
	{
		while (str)
			f(*str++);
	}
	return (str);
}
