/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 18:34:59 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/22 18:35:12 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join)
	{
		ft_strcpy(join, (char *)s1);
		ft_strcat(join, s2);
	}
	return (join);
}
