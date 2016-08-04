/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:31:19 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:31:31 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && s1[count] == s2[count])
		count++;
	return (s1[count] - s2[count]);
}
