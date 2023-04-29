/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:30:07 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/15 16:03:34 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return(0);
	else if (nb == 0)
		return 1;
	
	int temp;

	temp = nb;
	while (nb > 1)
	{
		temp *= (nb -1);
		nb--;
	}
	return (temp);
}

int main(void)
{
	int number = 11;
	int result;
	result = ft_iterative_factorial(number);
	printf("factorial de %d: %d\n", number, result);
	//return(0);
	
	clock_t tiempo_inicio, tiempo_final;
	double segundos;
	
	tiempo_inicio = clock();
	
	/*operación a medir tiempos, operación básica del código, normalmente bucles*/
	
	tiempo_final = clock();
	
	segundos = (double)(tiempo_inicio - tiempo_final) / CLOCKS_PER_SEC; /*según que estes midiendo el tiempo en segundos es demasiado grande*/
	
	printf("%f",segundos);
	
	return 0;
}
