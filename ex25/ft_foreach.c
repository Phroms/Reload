/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:30:44 by agrimald          #+#    #+#             */
/*   Updated: 2023/04/28 20:08:22 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;
	int		a;

	a = n % 10;
	if (n / 10 >= 1)
	{
		ft_putchar(n / 10);
	}
	c = a + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putchar(-nb);
	}
	else
	{
		ft_putchar(nb);
	}
}

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}	
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    ft_foreach(arr, arr_length, &ft_putnbr);
    return 0;
}
