/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: romainlaforgue <romainlaforgue@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 20:41:00 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 21:21:03 by romainlafor ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		chr;
	const unsigned char	*str;

	str = s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*str == chr)
			return ((void *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((void *)str);
	return (NULL);
}
