/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:10:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/12 19:14:34 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;
	int	j;

	i = '0';
	j = '9';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
/*int main(void)
{
	ft_print_numbers();
	return (0);
}
*/
