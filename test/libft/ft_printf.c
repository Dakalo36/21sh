/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 14:05:18 by dnematan          #+#    #+#             */
/*   Updated: 2016/06/05 16:18:51 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		out;
	char	*str;

	out = 0;
	va_start(ap, format);
	str = ft_strdup(format);
	out = ft_inner(ap, str);
	va_end(ap);
	return (out);
}
