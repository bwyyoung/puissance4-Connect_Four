/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

void			game_input(void)
{
	if (g_connect.render_mode == RENDER_TERMINAL)
	{
		if (g_connect.state == STATE_PLAY)
			ft_printf("Input Insertion Column (%i-%i): ", 1, g_connect.input_w);
		get_next_line(0, &g_connect.buffer);
		g_connect.insert_c = ft_atoi(g_connect.buffer);
		return ;
	}
	while (true)
	{
		g_connect.insert_c = -1;
		NCURSES.ch = getch();
		if ((NCURSES.ch <= 57 && NCURSES.ch >= 48) || (NCURSES.ch == 10)
			|| (NCURSES.ch == 127))
			break ;
		else
			continue ;
	}
	g_connect.input_enter = ncurses_input();
}

t_bool			ncurses_input(void)
{
	if (NCURSES.ch == 10)
	{
		NCURSES.cursor = 0;
		g_connect.insert_c = ft_atoi(NCURSES.input_number);
		ft_memset(NCURSES.input_number, 32, NCURSES_INPUT_LIMIT);
		return (true);
	}
	if (NCURSES.ch <= 57 && NCURSES.ch >= 48)
		if (NCURSES.cursor < NCURSES_INPUT_LIMIT)
		{
			NCURSES.input_number[NCURSES.cursor] = '0' + NCURSES.ch - 48;
			NCURSES.cursor++;
		}
	if (NCURSES.ch == 127)
	{
		NCURSES.cursor = ((NCURSES.cursor > 0) ? NCURSES.cursor - 1 : 0);
		NCURSES.input_number[NCURSES.cursor] = ' ';
	}
	NCURSES.input_number[NCURSES_INPUT_LIMIT] = '\0';
	return (false);
}

void			grid_add(int id, int x, int y)
{
	GRID[x][y] = id;
}

void			player_stack(int id)
{
	g_connect.j = -1;
	while (++g_connect.j < g_connect.input_h)
	{
		if (g_connect.grid[g_connect.insert_c - 1][g_connect.j] > 0)
		{
			if (g_connect.j - 1 < 0)
			{
				g_connect.insert_c = -1;
				g_connect.error = ERROR_INPUT;
				return ;
			}
			grid_add(id, g_connect.insert_c - 1, g_connect.j - 1);
			return ;
		}
	}
	grid_add(id, g_connect.insert_c - 1, g_connect.input_h - 1);
}

void			process_input(void)
{
	g_connect.error = 0;
	if (g_connect.state == STATE_PLAY)
	{
		if (g_connect.insert_c < 1 ||
			g_connect.insert_c > g_connect.input_w)
		{
			g_connect.insert_c = -1;
			g_connect.error = ERROR_INPUT;
		}
		else
		{
			player_stack(ID_PLAYER);
		}
	}
}
