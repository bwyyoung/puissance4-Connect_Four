/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

/*
** return a bitmask containing a single 1
** corresponding to the top cell of a given column
*/
uint64_t			top_mask(int col)
{
	return (UINT64_C(1) << (g_connect.input_h - 1))
	<< col * (g_connect.input_h + 1);
}

/*
** return a bitmask containing a single 1 corresponding
** to the bottom cell of a given column
*/
uint64_t			bottom_mask(int col)
{
	return (UINT64_C(1) << col * (g_connect.input_h + 1));
}

/*
** return a bitmask 1 on all the cells of a given column
*/
uint64_t			column_mask(int col)
{
	return ((UINT64_C(1) << g_connect.input_h) - 1) << col *
	(g_connect.input_h + 1);
}

/*
** Test an alignment for current player (identified by one in the bitboard pos)
** @param a bitboard position of a player's cells.
** @return true if the player has a 4-alignment.
*/
t_bool				hard_alignment(uint64_t pos)
{
	D_HARD_P1.m = pos & (pos >> (H + 1));
	if (D_HARD_P1.m & (D_HARD_P1.m >> (2 * (H + 1))))
		return (true);
	D_HARD_P1.m = pos & (pos >> H);
	if (D_HARD_P1.m & (D_HARD_P1.m >> (2 * H)))
		return (true);
	D_HARD_P1.m = pos & (pos >> (g_connect.input_h + 2));
	if (D_HARD_P1.m & (D_HARD_P1.m >> (2 * (H + 2))))
		return (true);
	D_HARD_P1.m = pos & (pos >> 1);
	if (D_HARD_P1.m & (D_HARD_P1.m >> 2))
		return (true);
	return (false);
}

void				t_hard_copy(t_hard *p1, t_hard *p2)
{
	p2->current_position = p1->current_position;
	p2->mask = p1->mask;
	p2->m = p1->m;
	p2->nodecount = p1->nodecount;
	p2->max = p1->max;
	p2->moves = p1->moves;
	p2->x = p1->x;
	p2->init = p1->init;
}
