/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakahle <wmakahle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:19:10 by wmakahle          #+#    #+#             */
/*   Updated: 2026/09/12 18:19:11 by wmakahle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int num);
int	ft_puthexlow(unsigned int n);
int	ft_puthexupp(unsigned int n);
int	ft_putaddress(unsigned long n);
int	ft_putunbr(unsigned int n);

#endif
