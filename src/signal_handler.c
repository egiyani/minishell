/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 13:33:56 by emmanuel          #+#    #+#             */
/*   Updated: 2020/05/16 13:33:57 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
** Handles interruption signals on a running process
**
** @param		signo		The signal number
** @return		N/A
*/

void	proc_signal_handler(int signo)
{
	if (signo == SIGINT)
	{
		ft_putstr("\n");
		signal(SIGINT, proc_signal_handler);
	}
}

/*
** Handles interruption signals on the program
**
** @param		signo		The signal number
** @return		N/A
*/

void	signal_handler(int signo)
{
	if (signo == SIGINT)
	{
		ft_putstr("\n");
		display_prompt_msg();
		signal(SIGINT, signal_handler);
	}
}
