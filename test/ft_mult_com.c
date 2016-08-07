/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mult_com.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 14:21:22 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/07 15:47:27 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_shell.h"

void	run_multi_com(char **args)
{
	int		i;
	char	**multi;

	i = 0;
	while (args[i])
	{
		multi = ft_strsplit(args[i], ' ');
		execute_comm(multi);
		i++;
	}
}

int		check_args(char *str)
{
	int i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == ';')
			k++;
		i++;
	}
	return (k);
}
