/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   connect_four.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONNECT_FOUR_H
# define CONNECT_FOUR_H
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include "libft/get_next_line.h"
# include "vector.h"
# include <time.h>
# include <stdlib.h>
# include <stdint.h>
# include <ncurses.h>
# define MIN_WIDTH 7
# define MIN_HEIGHT 6
# define MAX_HEIGHT 60
# define MAX_WIDTH 70
# define MAX_HARD_WIDTH 9
# define MAX_HARD_BITS 64
# define ID_PLAYER 1
# define ID_COMPUTER 2
# define ERROR_INPUT 1;
# define STATE_PLAY 1
# define STATE_SELECT_DIFF 1
# define DIFFICULTY_EASY 1
# define DIFFICULTY_MEDIUM 2
# define DIFFICULTY_HARD 3
# define RENDER_TERMINAL 1
# define RENDER_NCURSES 2
# define NCURSES_INPUT_LIMIT 3
# define I g_connect.i
# define J g_connect.j
# define W g_connect.input_w
# define H g_connect.input_h
# define D_HARD_P1 g_connect.d_hard
# define NC_W (((W * 2) < 30) ? 30 : (W * 2))
# define NC_H H * 2
# define H_X D_HARD_P1.x
# define H_Y D_HARD_P1.y
# define H_DY D_HARD_P1.dy
# define H_DX D_HARD_P1.dx
# define H_NB D_HARD_P1.nb
# define GRID g_connect.grid
# define NCURSES g_connect.r_ncurses
# define P p_easy.placed

typedef struct		s_easy
{
	int				count;
	int				pos_i;
	int				pos_j;
	int				pos_h;
	int				pos_v;
	int				h;
	int				v;
	int				diag_g;
	int				diag_d;
	int				placed;
}					t_easy;

t_easy				p_easy;

typedef struct		s_ncurses
{
	WINDOW			*game_window;
	WINDOW			*border_window;
	int				offsetx;
	int				offsety ;
	int				max_y;
	int				max_x;
	int				margin_x;
	int				margin_y;
	t_bool			graphics_end;
	char			*score;
	char			*instruction;
	int				ch;
	char			*round_string;
	int				cursor;
	char			input_number[NCURSES_INPUT_LIMIT + 1];
}					t_ncurses;

typedef struct		s_connect
{
	t_easy			d_easy;
	t_ncurses		r_ncurses;
	int				render_mode;
	int				error;
	int				winner;
	int				difficulty;
	int				input_w;
	int				input_h;
	int				first_turn;
	t_bool			is_play;
	int				**grid;
	char			*buffer;
	int				draw;
	int				round;
	int				state;
	int				insert_c;
	int				i;
	int				j;
}					t_connect;

t_connect			g_connect;

void				setup_difficulty(void);
void				setup_render(void);

void				game_input(void);
void				player_stack(int id);
void				process_input(void);
void				game_render(void);
void				game_loop(void);
void				setup_game(void);
void				end_game(void);
t_bool				check_win(int p);

void				computer_turn(void);

int					easy_verif(int p);
void				easy_random_pick(void);
t_easy				easy_compar(t_easy *compar, int p);
void				easy_place(int v, int h, int v_under, int h_under);
int					easy_counter_win_v(t_easy *verif);
int					easy_counter_win_h(t_easy *verif);
int					easy_counter_win_g(t_easy *verif);
int					easy_counter_win_d(t_easy *verif);

void				render_ncurses(void);
void				render_terminal(void);
void				ncurses_input(void);

void				Graphics_Start();
void				Graphics_End();
void				Render_Start();
void				Render_Map();
void				Render_End();
#endif
