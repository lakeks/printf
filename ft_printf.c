/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:42:05 by ktong             #+#    #+#             */
/*   Updated: 2024/04/25 10:57:00 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(char s, va_list *args, int *i)
{
	if (s == 's')
		ft_str(va_arg(*args, char *));
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int));
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int));
	else if (s == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int));
	else if (s == 'X')
		ft_hexadecimal2(va_arg(*args, unsigned int));
	else if (s == 'p')
		ft_pointer(va_arg(*args, unsigned long));
	else if (s == 'c')
		ft_putchar(va_arg(*args, int));
	else if (s == '%')
		ft_putchar('%');
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;

	i = 0;
	g_length = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			ft_check(string[i], &args, &i);
			i++;
		}
		else
		{
			ft_putchar((char)string[i]);
			i++;
		}
	}
	va_end(args);
	return (g_length);
}

/*
int main(void)
{
	void	*i = "yhgyhyh";

	printf("%p",i);
	printf("\n");
	ft_printf("%p",i);
	printf(" %p \n", -1);
	printf(" %p \n", 1);
	printf(" %p \n", 15);
	printf(" %p \n", 16);
	printf(" %p \n", 17);
	printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf(" %p %p \n", INT_MIN, INT_MAX);
	printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	printf(" %p %p \n", 0, 0);
	return (0);
}
*/
