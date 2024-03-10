/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lworden <lworden@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:37:06 by lworden           #+#    #+#             */
/*   Updated: 2024/01/26 19:56:23 by lworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *args, ...);
int			pf_isin(char c, const char *g_types);
int			u_f(va_list *ap);
int			c_f(va_list *ap);
int			s_f(va_list *ap);
int			p_f(va_list *ap);
int			x_f(va_list *ap);
int			b_f(va_list *ap);
int			xup_f(va_list *ap);
void		w_out(int *i, const char *args, va_list *ap);
int			call(int f, va_list *ap);
int			base(long long x, char *base, int b);
int			rec(long long x, char *base, int b, int n);
int			ubase(unsigned long long x, char *base, int b);
int			urec(unsigned long long x, char *base, int b, int n);

#endif
