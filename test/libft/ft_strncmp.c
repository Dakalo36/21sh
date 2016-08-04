/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:46:54 by dnematan          #+#    #+#             */
/*   Updated: 2016/07/10 13:57:41 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] != '\0' && s2[count] != '\0' && s1[count] == s2[count]
			&& count < n)
	{
		count++;
		n--;
	}
	return (s1[count] - s2[count]);
}
