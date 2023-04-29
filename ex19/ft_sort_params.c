/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:53:08 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/27 20:32:27 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		   i++;
	   return ((unsigned char)s1[i] - (unsigned char) s2[i]);

}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

void	ft_sort(char **argv)
{
	int i;
	int j;
	char *m;

	i = 1;
	while (argv[i])
	{	
		j = 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				m = argv[i];
				argv[i] = argv[j];
				argv[j] = m;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_sort(argv);
	int i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
