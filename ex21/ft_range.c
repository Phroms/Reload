/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:39:52 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/28 17:19:13 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *result;
	int	resta;
	int	i;

	if (min >= max) 
	
		return (NULL);
	
	
	resta = max - min;
	
	result = (int *)malloc(resta * sizeof(int));
	
	if (result == NULL)
		return (NULL);
	
	i = 0;
	while (i < resta)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
int main()
{
    int min = 1;
    int max = 40;
    int *result = ft_range(min, max);

    if (result == NULL)
    {
        printf("El rango ingresado es inválido\n");
        return 1;
    }

    int i = 0;
    while (i < (max - min))
    {
        printf("%d ", result[i]);
        i++;
    }

    printf("\n");

    free(result);
    return 0;
}
