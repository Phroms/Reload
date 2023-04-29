/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:15:19 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/17 18:55:55 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
int main(void)
{
	char j[9] = "holap";
	printf ("%d", ft_strlen(j));
	return (0);
}
