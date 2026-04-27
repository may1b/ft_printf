/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrass <magrass@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:12:55 by magrass           #+#    #+#             */
/*   Updated: 2026/04/27 02:35:49 by magrass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>

int		ft_printf(const char *fmt, ...);

size_t	ft_strlen(const char *s);

int		ft_print_string(char *str);

int		ft_print_ptr(size_t ptr);

#endif
