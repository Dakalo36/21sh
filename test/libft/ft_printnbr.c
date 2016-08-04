/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 13:30:20 by dnematan          #+#    #+#             */
/*   Updated: 2016/06/05 16:28:49 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(va_list ap, char scf)
{
	int			j;
	char		*str;

	if (scf == 'p')
	{
		ft_putstr("0x7fff");
		str = ft_convert1((unsigned int)va_arg(ap, void *), 16, scf);
	}
	else
	{
		j = va_arg(ap, unsigned int);
		if (scf == 'u' || scf == 'U')
			str = ft_convert1(j, 10, scf);
		if (scf == 'x' || scf == 'X')
			str = ft_convert1(j, 16, scf);
		if (scf == 'o' || scf == 'O')
			str = ft_convert1(j, 8, scf);
	}
	ft_putstr(str);
	return (strlen(str));
}
