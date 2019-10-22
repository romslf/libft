/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 15:56:43 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 12:08:46 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		n;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (*d != '\0')
		d++;
	n = d - dst;
	n = size - n;
	while (*s != '\0' && n > 1)
	{
		*d++ = *s++;
		n--;
	}
	*d = '\0';
	return (d - dst + ft_strlen((char *)src));
}
