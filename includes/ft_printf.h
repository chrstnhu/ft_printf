/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrhu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:43:53 by chrhu             #+#    #+#             */
/*   Updated: 2023/12/01 16:13:46 by chrhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_printf_char(char c);
int	ft_printf_str(char *str);
int	ft_printf_ptr(void const *p);
int	ft_printf_dec(int num);
int	ft_printf_dec_uns(unsigned int num);
int	ft_printf_hex_min(unsigned int num);
int	ft_printf_hex_max(unsigned int num);

#endif
