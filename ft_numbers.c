/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:50:04 by ktong             #+#    #+#             */
/*   Updated: 2024/04/29 16:28:34 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_number(int number)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		g_length += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putchar('-');
		ft_number(number * -1);
	}
	else
	{
		if (number > 9)
			ft_number(number / 10);
		ft_putchar(number % 10 + '0');
	}
}

void	ft_unsigned_int(unsigned int u)
{
	if (u >= 10)
		ft_unsigned_int(u / 10);
	ft_putchar(u % 10 + '0');
}

void	ft_hexadecimal(unsigned long x)
{
	char	string[25];
	char	*base_character;
	int		i;

	base_character = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar('0');
		return ;
	}
	while (x != 0)
	{
		string[i] = base_character [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar(string[i]);
}

void	ft_hexadecimal2(unsigned long x)
{
	char	string[25];
	char	*base_character;
	int		i;

	base_character = "0123456789ABCDEF";
	i = 0;
	if (x == 0)
	{
		ft_putchar('0');
		return ;
	}
	while (x != 0)
	{
		string[i] = base_character [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar(string[i]);
}

void	ft_pointer(unsigned long args)
{
	write (1, "0x", 2);
	g_length += 2;
	if (args == 0)
	{
		write (1, "0", 1);
		g_length ++;
	}
	else
	{
		ft_hexadecimal(args);
	}
}
