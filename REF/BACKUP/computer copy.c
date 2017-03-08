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
	if (!D_HARD_P1.init)
	{
		D_HARD_P1.init = 1;
		D_HARD_P1.total_spaces = W * H;
		vector_init_int(&D_HARD_P1.height, W);
		vector_init(&D_HARD_P1.solutions);
		vector_init(&D_HARD_P1.moves);
		D_HARD_P1.moves_count = 0;
	}
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
