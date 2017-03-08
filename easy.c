/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abassibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 18:07:02 by abassibe          #+#    #+#             */
/*   Updated: 2017/03/04 18:07:08 by abassibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

void	easy_random_pick(void)
{
	int		random;

	random = rand() % g_connect.input_w;
	if (random == 0)
		random++;
	g_connect.insert_c = random + 1;
	player_stack(ID_COMPUTER);
}

void	easy_place(int v, int h, int v_under, int h_under)
{
	if (g_connect.grid[v_under][h_under] != 0)
		g_connect.grid[v][h] = ID_COMPUTER;
}
