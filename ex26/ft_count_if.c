/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:36:27 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/29 17:27:52 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str(char *paquito)
{
	if (*paquito == 'h')
		return 1;
	else 
		return 0;
}
int ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	
	i = 0;
	while(*tab)
	{
		if(f(*tab))
		{
			i++;
		}
		tab++;
	}
	return (i);
}
int main(int argc, char **argv)
{
	printf("%d", ft_count_if(argv, &ft_str));
}
