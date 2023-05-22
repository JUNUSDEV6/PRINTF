/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:57:10 by yohanafi          #+#    #+#             */
/*   Updated: 2023/05/22 12:12:47 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
size_t	ft_check_form(char c, va_list arg_lst);
size_t	ft_putchar(char c);
size_t	ft_strlen(const char *str);
size_t	ft_putstr(const char *str);
size_t	ft_putnbr(long int nbr);
size_t	ft_putnbr_base(unsigned long int nbr, char *base);
#endif