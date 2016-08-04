/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 03:51:35 by dnematan          #+#    #+#             */
/*   Updated: 2016/06/05 16:16:24 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert1(unsigned int num, int base, char scf)
{
	static char	buffer[50];
	char		*ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	while (num != 0)
	{
		if (ft_islower(scf) == 1)
			*--ptr = "0123456789abcdef"[num % base];
		else
			*--ptr = "0123456789ABCDEF"[num % base];
		num /= base;
	}
	return (ptr);
}
