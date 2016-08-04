/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 11:50:24 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/02 18:01:15 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_shell.h" 

char	*get_homepath(char **env)
{
	int		i;
	char	**str;
	char	*re;

	i = 0;
	while (env[i])
	{
		if (ft_strncmp("HOME", env[i], 4) == 0)
		{
			str = ft_strsplit(env[i], '=');
			re = str[1];
			return (re);
		}
		i++;
	}
	return (NULL);
}

int		msh_cd(char **args, char **environ)
{
	if (args[1] == NULL)
	{
		if (chdir(get_homepath(environ)) != 0)
			ft_printf("damm");
	}
	else
	{
		if (chdir(args[1]) != 0)
			ft_printf("Mini_shell Error: %s is not a directory\n", args[1]);
		return (1);
	}
	return (1);
}

/*int		ms_echo(char **args, char **environ)
{

}*/
