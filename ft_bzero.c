/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleong <dleong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:35:16 by dleong            #+#    #+#             */
/*   Updated: 2017/09/20 10:40:31 by dleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*result;
	size_t	i;

	if (n == 0)
		return ;
	result = s;
	i = 0;
	while (i < n)
	{
		result[i] = 0;
		i++;
	}
}