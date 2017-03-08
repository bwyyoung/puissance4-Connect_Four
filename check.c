/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

t_bool		are_four_connected_h_v(int p)
{
	I = -1;
	J = -1;
	while (++J < g_connect.input_h - 3)
	{
		I = -1;
		while (++I < g_connect.input_w)
			if (g_connect.grid[I][J] == p && g_connect.grid[I][J + 1] ==
			p && g_connect.grid[I][J + 2] == p && g_connect.grid[I][J + 3] == p)
				return (true);
	}
	I = -1;
	while (++I < g_connect.input_w - 3)
	{
		J = -1;
		while (++J < g_connect.input_h)
			if (g_connect.grid[I][J] == p && g_connect.grid[I + 1][J] ==
			p && g_connect.grid[I + 2][J] == p && g_connect.grid[I + 3][J] == p)
				return (true);
	}
	return (false);
}

t_bool		are_four_connected_diagonal(int p)
{
	I = 2;
	J = 0;
	while (++I < g_connect.input_w)
	{
		J = 0;
		while (++J < g_connect.input_h)
			if (g_connect.grid[I][J] == p && g_connect.grid[I - 1][J + 1] == p
				&& g_connect.grid[I - 2][J + 2] == p &&
					g_connect.grid[I - 3][J + 3] == p)
				return (true);
	}
	I = 2;
	while (++I < g_connect.input_w)
	{
		J = 2;
		while (++J < g_connect.input_h)
			if (g_connect.grid[I][J] == p && g_connect.grid[I - 1][J - 1] == p
				&& g_connect.grid[I - 2][J - 2] == p &&
					g_connect.grid[I - 3][J - 3] == p)
				return (true);
	}
	return (false);
}

t_bool		check_win(int p)
{
	if (!are_four_connected_h_v(p))
		if (!are_four_connected_diagonal(p))
			return (false);
	if (g_connect.render_mode != RENDER_NCURSES)
		ft_printf("PLAYER %i WINS\n", p);
	g_connect.winner = p;
	g_connect.is_play = false;
	if (g_connect.render_mode == RENDER_NCURSES)
		render_end();
	return (true);
}
