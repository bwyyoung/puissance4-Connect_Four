/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

void		render_newline(void)
{
	ft_printf("\n");
	g_connect.i = -1;
}

void		render_terminal(void)
{
	g_connect.i = -1;
	g_connect.j = -1;
	g_connect.i += ft_printf("--ROUND %i--", g_connect.round) / 2;
	while (++g_connect.i < g_connect.input_w - 1)
		ft_printf("--");
	render_newline();
	while (++g_connect.j < g_connect.input_h)
	{
		while (++g_connect.i < g_connect.input_w)
			ft_printf("%i ", g_connect.grid[g_connect.i][g_connect.j]);
		render_newline();
	}
}

void		render_ncurses(void)
{
	render_start();
	render_map();
	render_end();
}

void		game_render(void)
{
	if (g_connect.render_mode == RENDER_TERMINAL)
		render_terminal();
	else if (g_connect.render_mode == RENDER_NCURSES)
		render_ncurses();
}
