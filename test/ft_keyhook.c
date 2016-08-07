/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyhook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 15:38:13 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/07 14:21:00 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_shell.h"

static void		ft_clear(char *str)
{
	int			loop;

	loop = 0;
	while (str[loop] != '\0')
		str[loop++] = '\0';
}

void			ft_keyhook(void)
{
	char		key[5];

	key[4] = '\0';
	ft_clear(key);
	read(0, key, 1);
	if (key[0] == 27 && key[1] == '\0' && key[2] == '\0')
		return ;
	else if (key[0] == 27 && key[1] == 91 && key[2] == 'A')
		ft_putstr("UP");
	else if (key[0] == 27 && key[1] == 91 && key[2] == 'B')
		ft_putstr("DOWN");
}
