/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: romainlaforgue <romainlaforgue@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 14:55:35 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 19:47:15 by romainlafor ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i + j < len)
	{
		// j = 0;
		// while (haystack[i + j] == needle[j] && i + j < len)
		// {
		// 	if (needle[j + 1] == '\0')
		// 		return ((char *)haystack + i);
		// 	j++;
		// }
		if (haystack[i + j] == needle[j])
		{
			if (needle[++j] == '\0')
				return ((char *)haystack + i);
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
