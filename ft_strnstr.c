/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 14:55:35 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 15:06:47 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		x;
	int		pos;

	i = 0;
	x = 0;
	pos = 0;
	while (haystack[i] && needle[x] && i < len)
	{
		if (haystack[i] == needle[x])
		{
			if (x == 0)
				pos = i;
			x++;
		}
		else if (haystack[i] != needle[i] && x != 0)
		{
			x = 0;
			pos = 0;
		}
		i++;
	}
	if ((x == 0 && needle[0]) || needle[x] != '\0')
		return (NULL);
	return ((char *)haystack + pos);
}
