/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 09:39:52 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/07 15:51:37 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_shell.h"

void	ft_run(char **args, char **env)
{
	char	*path;

	if (access(args[0], F_OK) == -1)
	{
		path = get_path(env, args[0]);
		if (path != NULL)
		{
			execve(path, args, env);
		}
		else
		{
			ft_putstr("Command Not Found:");
			ft_putstr("\n");
			exit(0);
		}
	}
	else
		execve(args[0], args, env);
}

void	launch_msh(char **args, char **env)
{
	pid_t		pid;
	int			stat;

	pid = fork();
	if (pid == 0)
	{
		ft_run(args, env);
	}
	else if (pid < 0)
		ft_putendl("error could not start process");
	else
	{
		waitpid(pid, &stat, WUNTRACED);
		while (!WIFEXITED(stat) && !WIFSIGNALED(stat))
			waitpid(pid, &stat, WUNTRACED);
	}
}

void	execute_comm(char **args)
{
	extern char	**environ;

	if (ft_strcmp("cd", args[0]) == 0)
		msh_cd(args, environ);
	if (ft_strcmp("echo", args[0]) == 0)
		msh_echo(args, environ);
	if (ft_strcmp("env", args[0]) == 0)
		msh_env(environ);
	else
		launch_msh(args, environ);
}

int		main(void)
{
	char	*line;
	char	**args;
	char	**semi_args;

	while (1)
	{
		ft_putstr("21sh$> ");
		get_next_line(0, &line);
		if (check_args(line) > 0)
		{
			semi_args = ft_strsplit(line, ' ');
			run_multi_com(semi_args);
		}
		else
		{
			args = ft_strsplit(line, ' ');
			if (ft_strcmp("exit", args[0]) == 0)
				return (0);
			else
				execute_comm(args);
		}
	}
	return (0);
}
