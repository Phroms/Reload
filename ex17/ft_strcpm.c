/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:32:28 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/18 14:52:05 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		   i++;
	   return ((unsigned char)s1[i] - (unsigned char) s2[i]);
}
int main(void)
{
	char s1[] = "hola";
	char s2[] = "hila";
	printf ("%d", ft_strcmp(s1, s2));
	return (0);
}
