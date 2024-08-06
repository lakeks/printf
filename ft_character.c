/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chararcter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:04:01 by ktong             #+#    #+#             */
/*   Updated: 2024/04/25 09:08:38 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char character)
{
	write(1, &character, 1);
	g_length++;
}

void	ft_str(char *args)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		g_length += 6;
		return ;
	}
	while (args[i])
	{
		ft_putchar(args[i]);
		i++;
	}
}
