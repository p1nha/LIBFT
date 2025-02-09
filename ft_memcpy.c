/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:11:36 by alfrberm          #+#    #+#             */
/*   Updated: 2025/02/06 08:11:44 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_ptr;
	unsigned char	*dest_ptr;

	if (!dest && !src)
		return (NULL);
	src_ptr = (unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
