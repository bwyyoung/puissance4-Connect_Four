/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "connect_four.h"

int			error_arguments(void)
{
	ft_putstr("invalid arguments\n");
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc != 3)
		return (error_arguments());
	g_connect.input_w = ft_atoi(argv[1]);
	g_connect.input_h = ft_atoi(argv[2]);
	if (g_connect.input_w < MIN_WIDTH || g_connect.input_h < MIN_HEIGHT)
		return (error_arguments());
	if (g_connect.input_w > MAX_WIDTH || g_connect.input_h > MAX_HEIGHT)
		return (error_arguments());
	setup_difficulty();
	setup_render();
	setup_game();
	if (g_connect.error > 0)
		return (error_arguments());
	graphics_start();
	game_loop();
	graphics_end();
	end_game();
	return (0);
}
