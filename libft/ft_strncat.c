/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmanuel <emmanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 13:25:04 by emmanuel          #+#    #+#             */
/*   Updated: 2020/05/16 13:25:05 by emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int			i;
	int			j;

	i = -1;
	j = (int)ft_strlen(s1);
	while (*(s2 + ++i) && i < (int)n)
		*(s1 + j++) = *(s2 + i);
	*(s1 + j) = '\0';
	return (s1);
}
