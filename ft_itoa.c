/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 13:17:55 by dleong            #+#    #+#             */
/*   Updated: 2017/09/24 15:01:48 by dleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		negative;
	char	*a;

	negative = 0;
	if (n < 0)
		negative = 1;
	a = NULL;
	return (a);
}