/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 14:05:38 by dnematan          #+#    #+#             */
/*   Updated: 2016/07/03 13:37:03 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printchar(va_list ap);
int		ft_printf(const char *format, ...);
int		ft_printstr(va_list ap);
int		ft_printnbr(va_list ap, char scf);
int		ft_printdec(va_list ap);
int		ft_isspec(char c);
int		ft_inner(va_list ap, char *str);
char	*ft_convert1(unsigned int num, int base, char scf);

#endif
