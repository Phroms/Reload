/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:18:42 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/15 15:57:08 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb < 12)
		return(0);
	else if (nb <= 1)
		return(1);
	return nb * ft_recursive_factorial (nb - 1);
}

int main(void)
{
	int number = 13;
	int result;
	result = ft_recursive_factorial(number);
	printf("factorial de %d: %d\n", number, result);
	return (0);
}
