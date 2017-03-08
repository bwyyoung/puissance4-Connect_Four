/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abassibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 13:02:35 by abassibe          #+#    #+#             */
/*   Updated: 2017/03/04 15:16:06 by abassibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

int		easy_count_connect_v(t_easy *compar, int p, int j, int i)
{
	int		count;

	count = 0;
	compar->pos_i = 0;
	compar->pos_j = 0;
	while (++j < g_connect.input_h - 2)
	{
		if (g_connect.grid[i][j] == p)
			count++;
		if (g_connect.grid[i][j + 1] == p)
			count++;
		if (g_connect.grid[i][j + 2] == p)
			count++;
		if (compar->count < count)
		{
			compar->count = count;
			compar->pos_j = j;
			compar->pos_i = i;
		}
		if (count == 3)
			return (easy_counter_win_v(compar));
		count = 0;
	}
	return (0);
}

int		easy_count_connect_h(t_easy *compar, int p, int j, int i)
{
	int		count;

	count = 0;
	compar->pos_i = 0;
	compar->pos_j = 0;
	while (++i < g_connect.input_w - 2)
	{
		if (g_connect.grid[i][j] == p)
			count++;
		if (g_connect.grid[i + 1][j] == p)
			count++;
		if (g_connect.grid[i + 2][j] == p)
			count++;
		if (compar->count < count)
		{
			compar->count = count;
			compar->pos_i = i;
			compar->pos_j = j;
		}
		if (count == 3)
			return (easy_counter_win_h(compar));
		count = 0;
	}
	return (0);
}

int		easy_count_connect_diag_g(t_easy *compar, int p, int j, int i)
{
	int		count;

	count = 0;
	compar->pos_i = 0;
	compar->pos_j = 0;
	while (++j < g_connect.input_h - 2)
	{
		if (g_connect.grid[i][j] == p)
			count++;
		if (g_connect.grid[i + 1][j + 1] == p)
			count++;
		if (g_connect.grid[i + 2][j + 2] == p)
			count++;
		if (compar->count < count)
		{
			compar->count = count;
			compar->pos_i = j;
			compar->pos_j = i;
		}
		if (count == 3)
			return (easy_counter_win_g(compar));
		count = 0;
	}
	return (0);
}

int		easy_count_connect_diag_d(t_easy *compar, int p, int j, int i)
{
	int		count;

	count = 0;
	compar->pos_i = 0;
	compar->pos_j = 0;
	while (++j < g_connect.input_h)
	{
		if (g_connect.grid[i][j] == p)
			count++;
		if (g_connect.grid[i + 1][j - 1] == p)
			count++;
		if (g_connect.grid[i + 2][j - 2] == p)
			count++;
		if (compar->count < count)
		{
			compar->count = count;
			compar->pos_i = j;
			compar->pos_j = i;
		}
		if (count == 3)
			return (easy_counter_win_d(compar));
		count = 0;
	}
	return (0);
}

t_easy	easy_compar(t_easy *compar, int p)
{
	int		j;
	int		i;

	j = -1;
	i = -1;
	while (++j < g_connect.input_h)
		if ((P = easy_count_connect_h(compar, p, j, i)) == 1)
			return (*compar);
	i = -1;
	j = -1;
	while (++i < g_connect.input_w)
		if ((P = easy_count_connect_v(compar, p, j, i)) == 1)
			return (*compar);
	i = -1;
	j = -1;
	while (++i < g_connect.input_w - 3)
		if ((P = easy_count_connect_diag_g(compar, p, j, i)) == 1)
			return (*compar);
	i = -1;
	j = 2;
	while (++i < g_connect.input_w - 3)
		if ((P = easy_count_connect_diag_d(compar, p, j, i)) == 1)
			return (*compar);
	return (*compar);
}
