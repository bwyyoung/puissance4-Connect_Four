/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_ncurses.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"


void					Graphics_Start()
{
	if (g_connect.render_mode != RENDER_NCURSES)
		return ;
	NCURSES.margin_x = 2;
	NCURSES.margin_y = 2;
	NCURSES.graphics_end = false;
	initscr();
	noecho();
	refresh();
	curs_set(FALSE);
	NCURSES.offsetx = (COLS - NC_W) / 2;
	NCURSES.offsety = (LINES - NC_H) / 2;
	NCURSES.border_window = newwin(NC_H + 5, NC_W + 2,
	NCURSES.offsety - 1, NCURSES.offsetx - 1);
	NCURSES.game_window = newwin(NC_H + 3, NC_W, NCURSES.offsety, NCURSES.offsetx);
	getmaxyx(stdscr, NCURSES.max_y, NCURSES.max_x);
	start_color();
	box(NCURSES.border_window, 0 , 0);
	wrefresh(NCURSES.border_window);
}

void					Graphics_End()
{
	if (g_connect.render_mode != RENDER_NCURSES)
		return ;
	NCURSES.graphics_end = true;
	delwin(NCURSES.game_window);
	delwin(NCURSES.border_window);
	endwin();
}

void					Render_Map()
{

}

void					Render_Start()
{
	NCURSES.score = "Round ";
	g_connect.round
	NCURSES.instruction = "Input Insertion Column: ";
	if (g_connect.render_mode != RENDER_NCURSES)
		return ;
	I = -1;
	J = -1;
	while (++I < NC_W)
		while (++J < NC_H + 5)
			mvwprintw(NCURSES.game_window, J, I, " ");
	init_pair(10, 7, 0);
	wattron(NCURSES.game_window, COLOR_PAIR(10));
	if (!g_connect.draw || g_connect.is_play)
	{
		mvwprintw(NCURSES.game_window, NC_H + 1, 0, NCURSES.score);
		mvwprintw(NCURSES.game_window, NC_H + 2, 0, NCURSES.instruction);
	}
}

void					Render_End()
{
	if (g_connect.render_mode != RENDER_NCURSES)
		return ;
	wattron(NCURSES.game_window, COLOR_PAIR(10));
	if (g_connect.draw || !g_connect.is_play)
	{
		mvwprintw(NCURSES.game_window, NC_H + 2, 0, "GAME OVER");
		mvwprintw(NCURSES.game_window, NC_H + 1, 0, "PLAYER 2 WINS");
		if (g_connect.winner == 1)
			mvwprintw(NCURSES.game_window, NC_H + 1, 0, "PLAYER 1 WINS");
	}
	else
		mvwprintw(NCURSES.game_window, NC_H + 2,
				(int)ft_strlen(NCURSES.instruction), NCURSES.input_number);
	if (g_connect.draw)
		mvwprintw(NCURSES.game_window, NC_H + 1, 0, "MATCH DRAW");
	wrefresh(NCURSES.game_window);
	((g_connect.draw || !g_connect.is_play) ? getch() : 0);
}
