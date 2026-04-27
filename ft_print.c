/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrass <magrass@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 01:53:55 by magrass           #+#    #+#             */
/*   Updated: 2026/04/27 01:57:22 by magrass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

#define NULL_STR "(null)"

int	ft_print_string(char *str)
{
	if (!str)
		return (write(1, NULL_STR, ft_strlen(NULL_STR)));
	return (write(1, str, ft_strlen(str)));
}
