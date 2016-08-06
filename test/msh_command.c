/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 11:50:24 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/06 17:57:38 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_shell.h" 

char	*get_homepath(char *name, char **env)
{
	int		i;
	int		len;
	char	**str;
	char	*re;

	i = 0;
	len = ft_strlen(name);
	while (env[i])
	{
		if (ft_strncmp(name, env[i], len) == 0)
		{
			str = ft_strsplit(env[i], '=');
			re = str[1];
			return (re);
		}
		i++;
	}
	return (NULL);
}

void	msh_echo(char **args, char **env)
{
	int i;

	i = 1;
	if (args[1] == NULL)
	{
		ft_putchar('\n');
		return ;
	}
	if (args[1][0] == '$')
		func_print_env(args[1], env);
	else
	{
		while(args[i])
		{
			print_only(args[i]);
			i++;
		}
		ft_putchar('\n');
	}
}

int		msh_cd(char **args, char **environ)
{
	if (args[1] == NULL)
	{
		if (chdir(get_homepath("HOME", environ)) != 0)
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

void	msh_env(char **env)
{
	int i;

	i = 0;
	while (env[i])
	{
		ft_putendl(env[i]);
		i++;
	}
}
