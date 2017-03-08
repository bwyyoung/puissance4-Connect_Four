/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

void		com_hard(void)
{
	int		result;

	if (!D_HARD_P1.init)
	{
		D_HARD_P1.init = 1;
		D_HARD_P1.mask = 0;
		D_HARD_P1.current_position = 0;
		D_HARD_P1.moves = 0;
		D_HARD_P1.m = 0;
		D_HARD_P1.column_order = malloc(sizeof(int) * g_connect.input_w);
		I = -1;
		while (++I < g_connect.input_w)
		{
			D_HARD_P1.column_order[I] = g_connect.input_w / 2 +
					(1 - 2 * (I % 2)) * ((I + 1) / 2);
			printf("INIT D_HARD_P1.column_order %i %i\n", I, D_HARD_P1.column_order[I]);
		}
	}
	D_HARD_P1.bestscore = 0;
	D_HARD_P1.nodecount = 0;
	result = hard_negamax(&D_HARD_P1, -g_connect.input_w *
	g_connect.input_h / 2, g_connect.input_w * g_connect.input_h / 2);
	if (!result)
		g_connect.draw = 1;
	else if (result == -1)
		g_connect.error = 3;
	//else
	//	player_stack(ID_COMPUTER);
}

void		com_medium(void)
{

}

void		com_easy(void)
{
	if (easy_verif(ID_COMPUTER) == 1)
		check_win(ID_COMPUTER);
	if (easy_verif(ID_PLAYER) == 1)
		return ;
	else
		easy_random_pick();
}

void		computer_turn(void)
{
	if (g_connect.difficulty == DIFFICULTY_EASY)
		com_easy();
	if (g_connect.difficulty == DIFFICULTY_MEDIUM)
		com_medium();
	if (g_connect.difficulty == DIFFICULTY_HARD)
		com_hard();
}
