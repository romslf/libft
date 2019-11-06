/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 14:40:46 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 13:52:52 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	len;

	if (!dst || !src)
		return (0);
	n = ft_strlen(src);
	if (size)
	{
		if (n >= size)
			len = size - 1;
		else
			len = n;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (n);
}
