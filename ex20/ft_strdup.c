/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:00:31 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/19 17:23:25 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char	*nuevo;
	int		i;

	i = 0;
	nuevo = malloc(ft_strlen(src) + 1);
	if (nuevo == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		nuevo[i] = src[i];
		i++;
	}
	nuevo[i] = '\0';
	return (nuevo);
}
int	main(int ac, char **av)
{
	char *mio;
	char *suyo;

	if(ac == 2)
	{
		mio = ft_strdup(av[1]);
		suyo = strdup(av[1]);
		printf("ADDR:%p:%s:\nADDR:%p:%s:\n",&mio, mio, &suyo, suyo);
	}
	return (0);
}
