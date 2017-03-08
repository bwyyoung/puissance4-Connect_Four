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

void		vector_delete(t_vector *v, int index)
{
	int		i;

	if (index < 0 || index >= v->total)
		return ;
	v->items[index] = NULL;
	i = -1;
	while (i++ < v->total - 1)
	{
		v->items[i] = v->items[i + 1];
		v->items[i + 1] = NULL;
	}
	v->total--;
	if (v->total > 0 && v->total == v->capacity / 4)
		vector_resize(v, v->capacity / 2);
}

void		vector_free(t_vector *v)
{
	free(v->items);
}

void		vector_resize(t_vector *v, int capacity)
{
	void **items;

	items = malloc(sizeof(void *) * capacity);
	ft_memcpy(items, v->items, sizeof(void *) * capacity);
	if (items)
	{
		v->items = items;
		v->capacity = capacity;
	}
}

void		vector_set(t_vector *v, int index, void *item)
{
	if (index >= 0 && index < v->total)
		v->items[index] = item;
}

void		*vector_get(t_vector *v, int index)
{
	if (index >= 0 && index < v->total)
		return (v->items[index]);
	return (NULL);
}
