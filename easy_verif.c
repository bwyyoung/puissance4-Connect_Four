/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abassibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 13:02:54 by abassibe          #+#    #+#             */
/*   Updated: 2017/03/04 18:07:08 by abassibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

int		easy_counter_win_h(t_easy *verif)
{
	int		i;
	int		j;

	i = verif->pos_i;
	j = verif->pos_j;
	if (i > 0)
		if (GRID[i - 1][j] == 0 && (j + 1 == g_connect.input_h ||
				GRID[i - 1][j + 1] != 0))
		{
			g_connect.insert_c = i;
			player_stack(ID_COMPUTER);
			return (1);
		}
	if (i < g_connect.input_w - 3)
		if (GRID[i + 3][j] == 0 && (j + 1 == g_connect.input_h ||
				GRID[i + 3][j + 1] != 0))
		{
			g_connect.insert_c = i + 4;
			player_stack(ID_COMPUTER);
			return (1);
		}
	return (0);
}

int		easy_counter_win_v(t_easy *verif)
{
	int		i;
	int		j;

	i = verif->pos_i;
	j = verif->pos_j;
	if (j != 0 && GRID[i][j - 1] == 0)
	{
		g_connect.insert_c = i + 1;
		player_stack(ID_COMPUTER);
		return (1);
	}
	return (0);
}

int		easy_counter_win_g(t_easy *verif)
{
	int		j;
	int		i;

	j = verif->pos_j;
	i = verif->pos_i;
	if (i > 0 && j > 0)
		if (GRID[i - 1][j - 1] == 0 && GRID[i - 1][j] != 0)
		{
			if (i - 1 < 0 || j - 1 < 0)
				return (0);
			g_connect.insert_c = i - 1;
			player_stack(ID_COMPUTER);
			return (1);
		}
	if (i < g_connect.input_w - 3 && j < g_connect.input_h - 3)
		if (GRID[i + 3][j + 3] == 0 && GRID[i + 3][j + 4] != 0)
		{
			if (i + 3 > g_connect.input_w || j + 3 > g_connect.input_h)
				return (0);
			g_connect.insert_c = i + 3;
			player_stack(ID_COMPUTER);
			return (1);
		}
	return (0);
}

int		easy_counter_win_d(t_easy *verif)
{
	int		i;
	int		j;

	i = verif->pos_i;
	j = verif->pos_j;
	if (i < g_connect.input_w - 1 && j > 0)
		if (GRID[i + 3][j - 3] == 0 && GRID[i + 3][j - 2] != 0)
		{
			if (i + 1 >= g_connect.input_w || j - 1 < 0)
				return (0);
			g_connect.insert_c = i + 4;
			player_stack(ID_COMPUTER);
			return (1);
		}
	if (i > 2 && j < g_connect.input_h - 3)
		if (GRID[i - 1][j + 1] == 0 && GRID[i - 1][j + 2] != 0)
		{
			if (i - 1 < 0 || j + 2 >= g_connect.input_h)
				return (0);
			g_connect.insert_c = i - 3;
			player_stack(ID_COMPUTER);
			return (1);
		}
	return (0);
}

int		easy_verif(int p)
{
	t_easy *verif;

	verif = (t_easy *)malloc(sizeof(t_easy));
	*verif = easy_compar(verif, p);
	if (P == 1)
		return (1);
	return (0);
}
