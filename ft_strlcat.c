/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: romainlaforgue <romainlaforgue@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 15:56:43 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 16:33:28 by romainlafor ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		n;
	size_t 		l;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	n = size;
	while (*d != '\0' && n-- != 0)
		d++;
	l = d - dst;
	n = size - l;
	if (n <= 0 || n < ft_strlen((char *)src))
		return (l + ft_strlen((char *)src));		
	while (*s != '\0')
	{
		if (n > 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (l + (s - src));
}
