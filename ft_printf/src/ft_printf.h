/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:13:32 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:53 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
unsigned int	ft_num_len(int n, unsigned int div);
size_t			ft_putchar(char c);
size_t			ft_putnbr(int n);
size_t			ft_putstr(char *s);
size_t			ft_print_pointer(void *ptr);
size_t			ft_putundec(unsigned int n);
size_t			ft_puthex(int n, int uppercase);

#endif
