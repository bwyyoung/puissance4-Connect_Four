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

/*
** Plays a playable column.
** This function should not be called on a non-playable
** column or a column making an alignment.
** @param col: 0-based index of a playable column.
*/
void		hard_play(t_hard *p, int col)
{
	if (g_connect.difficulty != DIFFICULTY_HARD)
		return ;
	p->current_position ^= p->mask;
	p->mask |= p->mask + bottom_mask(col);
	p->moves++;
}

/*
** Indicates whether a column is playable.
* @param col: 0-based index of column to play
** @return true if the column is playable, false if the column is already full.
*/
int			hard_can_play(t_hard *p, int col)
{
	return ((p->mask && top_mask(col)) == 0);
}

/*
** Indicates whether the current player wins by playing a given column.
** This function should never be called on a non-playable column.
** @param col: 0-based index of a playable column.
** @return true if current player makes an alignment by
** playing the corresponding column col.
*/
t_bool		hard_is_winning_move(t_hard *p, int col)
{
	uint64_t	pos;

	pos = p->current_position;
	pos |= (p->mask + bottom_mask(col)) & column_mask(col);
	return (hard_alignment(pos));
}

int			hard_negamax_p2(t_hard **P, int *alpha, int *beta)
{
	int					x;
	t_hard				p2;
	int					score;

	printf("hard_negamax_p2 1\n");
	x = -1;
	while (++x < W)
	{
		printf("hard_negamax_p2 2 %i %i\n", x, D_HARD_P1.column_order[x]);
		if (hard_can_play(*P, D_HARD_P1.column_order[x]))
		{
			printf("hard_negamax_p2 3\n");
			t_hard_copy(*P, &p2);
			printf("hard_negamax_p2 4 %llu\n", p2.mask);
			hard_play(&p2, D_HARD_P1.column_order[x]);
			printf("hard_negamax_p2 4.5 %llu\n", p2.mask);

			/* It's opponent turn in P2 position after current player
			** plays x column.
			** explore opponent's score within [-beta;-alpha] windows:
			** no need to have g ood precision for score better than beta
			** (opponent's score worse than -beta)
			** no need to check for score worse than alpha
			** (opponent's score worse better than -alpha)
			*/
			printf("hard_negamax_p2 5\n");
			score = -hard_negamax(&p2, -(*alpha), -(*beta));
			//g_connect.insert_c = x + 1;
			/* 1. prune the exploration if we find a possible move better
			** than what we were looking for.
			** 2. reduce the [alpha;beta] window for next exploration, as we only
			** need to search for a position that is better than the best so far.
			*/
			if (score >= *beta)
			{
				printf("hard_negamax_p2 6\n");
			//	g_connect.insert_c = x + 1;
				return (score);
			}
			printf("hard_negamax_p2 7  %i %i\n", x, D_HARD_P1.column_order[x]);
			if (score > *alpha)
			{
				printf("hard_negamax_p2 8\n");
				if (score > D_HARD_P1.bestscore)
				{
					D_HARD_P1.bestscore = score;
					g_connect.insert_c = D_HARD_P1.column_order[x];
					printf("BESTSCORE !%i!%i\n", score, g_connect.insert_c );
				}
				*alpha = score;
			}
		}
	}
	printf("GET ALPHA !%i!\n", *alpha);

	return (*alpha);
}

/*
** Recursively score connect 4 position using negamax variant of
** alpha-beta algorithm.
** @param: alpha < beta, a score window within which we are
** evaluating the position.
**
** @return the exact score, an upper or lower bound score depending of the case:
** - if actual score of position <= alpha then actual score
** <= return value <= alpha
** - if actual score of position >= beta
** then beta <= return value <= actual score
** - if alpha <= actual score <= beta then return value = actual score
*/
int			hard_negamax(t_hard *P, int alpha, int beta)
{
	printf("hard_negamax 1\n");
	if (alpha >= beta)
		return (-1);
	D_HARD_P1.nodecount++;
	printf("hard_negamax 2\n");
	if (P->moves == W * H)
		return (0);
	D_HARD_P1.x = -1;
	printf("hard_negamax 3\n");
	while (++D_HARD_P1.x < W)
		if (hard_can_play(P, D_HARD_P1.x) &&
				hard_is_winning_move(P, D_HARD_P1.x))
		{
			printf("hard_negamax 4\n");
			g_connect.insert_c = D_HARD_P1.x + 1;
			return ((W * H + 1 - P->moves) / 2);
		}
	D_HARD_P1.max = (W * H - 1 - P->moves) / 2;
	if (beta > D_HARD_P1.max)
	{
		printf("hard_negamax 5\n");
		beta = D_HARD_P1.max;
		if (alpha >= beta)
			return (beta);
	}
	printf("hard_negamax 6\n");
	return (hard_negamax_p2(&P, &alpha, &beta));
}
