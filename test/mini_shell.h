/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_shell.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 12:48:38 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/06 17:57:42 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_SHELL_H

# define MINI_SHELL_H

# include "libft/ft_printf.h"
# include "libft/get_next_line.h"
# include <sys/wait.h>


char				*get_path(char **env, char *args);
int					msh_cd(char **args, char **env);
void				msh_echo(char **args, char **env);
void				msh_env(char **env);
void				print_only(char	*str);
int					execute(char **args, char **environ);
void				func_print_env(char *args, char **env);
char				*get_homepath(char *name, char **env);

#endif
