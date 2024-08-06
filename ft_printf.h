/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:16:01 by prossi            #+#    #+#             */
/*   Updated: 2024/04/25 10:57:20 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

int				g_length;
void			ft_putchar(char character);
void			ft_str(char *args);
void			ft_number(int number);
void			ft_unsigned_int(unsigned int u);
void			ft_hexadecimal(unsigned long x);
void			ft_hexadecimal2(unsigned long x);
void			ft_pointer(unsigned long args);
int				ft_printf(const char *string, ...);

#endif
