/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:34:27 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 17:34:35 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdel(char **as)
{
	int	count;
	int	counts;

	count = 0;
	while (as[count] != '\0')
	{
		counts = 0;
		while (as[count][counts] != '\0')
		{
			free(&as[count][counts]);
			counts++;
		}
		free(&as[count]);
		count++;
	}
	return (0);
}
