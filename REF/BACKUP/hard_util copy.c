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

t_bool		hard_canplay(int col)
{
	return (!D_HARD_P1.won && (VECTOR_GET(D_HARD_P1.height, int, col) < 6));
}
