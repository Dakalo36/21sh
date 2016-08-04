/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_shell.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 12:48:38 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/04 18:14:03 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_SHELL_H

# define MINI_SHELL_H

# include "libft/ft_printf.h"
# include "libft/get_next_line.h"
# include <sys/wait.h>


void				msh_loop(char **env);
int					num_of_builtins(char **split);
char				*get_path(char **env, char *args);
char				*get_com(char *str);
int					msh_cd(char **args, char **env);
int					execute(char **args, char **environ);
//int					launch_msh(char **args, char **env);

#endif
