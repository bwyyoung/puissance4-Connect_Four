/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

void		init_hard(void)
{
	if (!D_HARD_P1.init)
	{
		D_HARD_P1.init = 1;
		D_HARD_P1.total_spaces = W * H;
		vector_init_int(&D_HARD_P1.height, W);
		vector_init(&D_HARD_P1.solutions);
		vector_init(&D_HARD_P1.moves);
		D_HARD_P1.moves_count = 0;
		D_HARD_P1.won = false;
	}
}

void		end_hard(void)
{
	vector_free(&D_HARD_P1.solutions);
	vector_free(&D_HARD_P1.moves);
	vector_free(&D_HARD_P1.height);
}

void		hard_delta(void)
{
	while ((H_X + H_DX < 7) && (H_Y + H_DX * H_DY < 6)
	&& (H_Y + H_DX * H_DY >= 0))
	{
		if (GRID[H_X + H_DX][H_Y + H_DX * H_DY] != GRID[H_X][H_Y])
			break;
		H_NB++;
		H_DX++;
	}
	H_DX = -1;
	while ((H_X + H_DX >= 0) && (H_Y + H_DX * H_DY < 6)
	&& (H_Y + H_DX * H_DY >= 0))
	{
		if (GRID[H_X + H_DX][H_Y + H_DX * H_DY] != GRID[H_X][H_Y])
			break;
		H_NB++;
		H_DX--;
	}
	if (H_NB >= 3)
		D_HARD_P1.won = true;
}

void		hard_win(void)
{
	H_X = VECTOR_GET(D_HARD_P1.moves, int, VECTOR_TOTAL(D_HARD_P1.moves) - 1);
	H_Y = VECTOR_GET(D_HARD_P1.height, int, x) - 1;
	if (H_Y >= 3 )
		if (GRID[H_X][H_Y - 3] == GRID[H_X][H_Y] && GRID[H_X][H_Y - 2])
			if (GRID[H_X][H_Y - 3] ==  GRID[H_X][H_Y] && GRID[H_X][H_Y - 1])
				if (GRID[H_X][H_Y - 3] == GRID[H_X][H_Y])
						D_HARD_P1.won = true;
	H_DY = -2;
	while (H_DY++ <= 1)
	{
		H_NB = 0;
		H_DX = 1;
		hard_delta();
	}
}

int			hard_print_solution(void)
{
	if (won || (D_HARD_P1.moves_count >= D_HARD_P1.total_spaces))
		return ;
}

void		hard_play(int col, t_bool dont_compute)
{
	g_connect.insert_c = col;
	player_stack(ID_PLAYER);
	VECTOR_ADD(D_HARD_P1.moves, INT2VOIDP(col));
	D_HARD_P1.moves_count++;
	hard_win();
	if (dont_compute)
		return ;
	hard_print_solution();
}
