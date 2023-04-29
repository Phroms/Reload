/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:00:26 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/17 18:53:55 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int ft_sqrt(int nb)
{
	int i;

	if(nb == 0 || nb == 1)
		return (1);
	if(nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
int main(void)
{
	int number = 144;
	int result;
	result = ft_sqrt(number);
	printf("la raiz de %d: %d\n", number, result);
	return(0);
}
