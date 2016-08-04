/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 16:04:45 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/04 18:02:59 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_shell.h" 

char	*get_path(char **env, char *args)
{
	int		n;
	int		i;
	char	**str;
	char	**re;
	char	*s;

	i = 0;
//	ft_putstr("get_path\n");
	while (env[i])
	{
		if (ft_strncmp("PATH", env[i], 4) == 0)
		{
//			ft_putstr("found_path\n");
			str = ft_strsplit(env[i], '=');
			re = ft_strsplit(str[1], ':');
			n = 0;
			while (re[n++])
			{
//				ft_putstr("in while\n");
				s = ft_strjoin(re[n], "/");
				s = ft_strcat(s, args);
				if (access(s, F_OK) == 0)
				{
//					ft_putstr("found!\n");
//					ft_putstr(s);
//					ft_putstr("\n");
					return (s);
				}
			}
		}
		i++;
	}
	return (NULL);
}

char	*get_com(char *str)
{
	char 	**split;
	int		i;

	i = 0;
	split = ft_strsplit(str, '/');
	while (split[i])
		i++;
	return (split[i]);
}
