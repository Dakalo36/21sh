/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 15:34:28 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/15 15:43:00 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		count;
	int		cpy;
	int		neg;

	cpy = 0;
	neg = 1;
	count = 0;
	if (str[count] == '-')
		neg = -1;
	while (str[count])
	{
		if (str[count] == ' ' || str[count] == '\t' || str[count] == '\n')
			count++;
		else if (str[count] == ft_isalpha((int)str))
			return (0);
			else if (str[count] >= 48 && str[count] <= 57)
			cpy = (cpy * 10) + str[count] - '0' ;
		count++;
	}
	return (cpy * neg);
}
