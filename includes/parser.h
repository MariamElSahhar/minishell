/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:43:53 by szerisen          #+#    #+#             */
/*   Updated: 2023/05/16 18:25:56 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_utils
{
	char					*args;
	char					**paths;
	char					**envp;
	struct s_cmds	*cmds;
	char					*pwd;
	char					*old_pwd;
	int						pipes;
	int						*pid;
	bool					heredoc;
	bool					reset;
}	t_utils;

typedef struct s_cmds
{
	char			**str;
	int				num_redirections;
	char			*hd_file_name;
	struct s_cmds	*next;
	struct s_cmds	*prev;
}	t_cmds;
