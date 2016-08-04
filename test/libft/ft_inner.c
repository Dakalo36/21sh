/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inner.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 15:22:33 by dnematan          #+#    #+#             */
/*   Updated: 2016/06/05 16:45:12 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	specifier(va_list ap, char scf)
{
	if (scf == 'c' || scf == 'C')
		return (ft_printchar(ap));
	if (scf == 's' || scf == 'S')
		return (ft_printstr(ap));
	if (scf == 'd' || scf == 'i')
		return (ft_printdec(ap));
	if (scf == 'u' || scf == 'U')
		return (ft_printnbr(ap, scf));
	if (scf == 'x' || scf == 'X' || scf == 'p')
		return (ft_printnbr(ap, scf));
	if (scf == 'o' || scf == 'O')
		return (ft_printnbr(ap, scf));
	else
		return (0);
}

int			ft_inner(va_list ap, char *str)
{
	int out;
	int i;

	i = 0;
	out = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '%')
		{
			while (ft_isspec(str[i + 1]) != 1)
				i++;
			out += specifier(ap, str[i + 1]);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == '%')
		{
			out += ft_putchar(str[i]);
			i++;
		}
		else
			out += ft_putchar(str[i]);
		i++;
	}
	return (out);
}
