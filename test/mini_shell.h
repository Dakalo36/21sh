/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_shell.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 12:48:38 by dnematan          #+#    #+#             */
/*   Updated: 2016/08/07 15:46:28 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_SHELL_H

# define MINI_SHELL_H

# include "libft/ft_printf.h"
# include "libft/get_next_line.h"
# include <sys/wait.h>
# include <curses.h>
# include <term.h>
# include <termios.h>
# include <sys/ioctl.h>
# include <signal.h>

typedef struct		s_list
{
	struct winsize	size;
	struct termios	term;
	char			**histrory;
	int				num_args;
	int				cur_pos;

}					t_list;

char				*get_path(char **env, char *args);
int					msh_cd(char **args, char **env);
void				msh_echo(char **args, char **env);
void				msh_env(char **env);
void				print_only(char	*str);
void				execute_comm(char **args);
void				func_print_env(char *args, char **env);
char				*get_homepath(char *name, char **env);
void				ft_keyhook(void);
void				run_multi_com(char **args);
int					check_args(char *str);

#endif
