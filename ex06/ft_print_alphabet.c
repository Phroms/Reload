/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:58:45 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/12 19:15:05 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	i;
	int	j;

	i = 'a';
	j = 'z';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}
/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
