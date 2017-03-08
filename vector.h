/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 14:49:06 by byoung-w          #+#    #+#             */
/*   Updated: 2014/12/25 07:29:01 by byoung-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# define INT2VOIDP(i) (void*)(uintptr_t)(i)
# define VECTOR_INIT_CAPACITY 4
# define VECTOR_INIT(vec) t_vector vec; vector_init(&vec)
# define VECTOR_INIT_VOID(vec, x) t_vector vec; int x; vector_init_void(&vec, x)
# define VECTOR_INIT_INT(vec, x) t_vector vec; int x; vector_init_int(&vec, x)
# define VECTOR_ADD(vec, item) vector_add(&vec, (void *) item)
# define VECTOR_SET(vec, id, item) vector_set(&vec, id, (void *) item)
# define VECTOR_GET(vec, type, id) (type) vector_get(&vec, id)
# define VECTOR_DELETE(vec, id) vector_delete(&vec, id)
# define VECTOR_TOTAL(vec) vector_total(&vec)
# define VECTOR_FREE(vec) vector_free(&vec)
# define VECTOR t_vector

typedef struct		s_vector
{
	void			**items;
	int				capacity;
	int				total;
}					t_vector;

void				vector_init_int(t_vector *v, int size);
void				vector_init_void(t_vector *v, int size);
void				vector_init(t_vector *vec);
int					vector_total(t_vector *vec);
void				vector_resize(t_vector *vec, int x);
void				vector_add(t_vector *vec, void *x);
void				vector_set(t_vector *vec, int x, void *y);
void				*vector_get(t_vector *vec, int x);
void				vector_delete(t_vector *y, int x);
void				vector_free(t_vector *vec);
#endif
