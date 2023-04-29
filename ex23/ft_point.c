/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:01:38 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/25 18:54:03 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_point.h"

struct direccion
{
	t_point *point;
};

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;
	struct direccion su_direccion;

	set_point(&point);
	su_direccion.point = &point;

	printf("x = %d, y = %d\n",su_direccion.point->x, su_direccion.point->y);
	return (0);
}
