/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 16:04:45 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/06 17:35:13 by dnematan         ###   ########.fr       */
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
	while (env[i])
	{
		if (ft_strncmp("PATH", env[i], 4) == 0)
		{
			str = ft_strsplit(env[i], '=');
			re = ft_strsplit(str[1], ':');
			n = 0;
			while (re[n++])
			{
				s = ft_strjoin(re[n], "/");
				s = ft_strcat(s, args);
				if (access(s, F_OK) == 0)
					return (s);
			}
		}
		i++;
	}
	return (NULL);
}

void	print_only(char *str)
{
	int i;

	i = 0;
	if (str[i] == '"')
		i++;
	while (str[i] != '"' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar(' ');
}

void	func_print_env(char *args, char **env)
{
	int 	i;
	char	*str;
	int		len;

	i = 0;
	str = ft_strdup(++args);
	len = ft_strlen(str);
	while(env[i])
	{
		if (ft_strncmp(str, env[i], len) == 0)
		{
			ft_putstr((const char*)get_homepath(str, env));
			ft_putchar('\n');
		}
			
		i++;
	}	
}
