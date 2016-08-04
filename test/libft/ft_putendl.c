/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:10:32 by dnematan          #+#    #+#             */
/*   Updated: 2016/07/17 18:20:08 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(const char *s)
{
	int		count;

	count = 0;
	while (s[count] != '\0')
	{
		ft_putchar(s[count]);
		count++;
	}
	ft_putchar('\n');
}
