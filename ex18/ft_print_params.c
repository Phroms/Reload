/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:04:39 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/18 16:47:47 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}
void	ft_display(int ac, char **av)
{
	int i;

	i = 1;

	while (ac > i)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}


int	main(int ac, char **av)
{
	ft_display(ac, av);
	return (0);
}
