/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void		vector_init(t_vector *v)
{
	v->capacity = VECTOR_INIT_CAPACITY;
	v->total = 0;
	v->items = malloc(sizeof(void *) * v->capacity);
}

void		vector_init_void(t_vector *v, int size)
{
	v->capacity = size;
	v->total = 0;
	v->items = malloc(sizeof(void *) * v->capacity);
}

void		vector_init_int(t_vector *v, int size)
{
	int		i;

	v->capacity = size;
	v->total = 0;
	v->items = malloc(sizeof(void *) * v->capacity);
	i = -1;
	while (++i < v->capacity)
	{
		VECTOR_ADD(*v, 0);
	}
}

int			vector_total(t_vector *v)
{
	return (v->total);
}

void		vector_add(t_vector *v, void *item)
{
	if (v->capacity == v->total)
		vector_resize(v, v->capacity * 2);
	v->items[v->total++] = item;
}
