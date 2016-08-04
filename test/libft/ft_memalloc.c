/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 18:37:29 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/22 18:37:34 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*temp;

	temp = (void *)malloc(sizeof(*temp) * (size + 1));
	if (temp)
		ft_bzero(temp, size + 1);
	return (temp);
}
