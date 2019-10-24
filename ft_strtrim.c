/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: romainlaforgue <romainlaforgue@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 12:06:40 by romainlafor  #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 12:29:12 by romainlafor ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char const	*s2;
	char		*res;
	
	if (!s1)
		return (NULL);
	s2 = s1;
	while (*s1++ == *set++)
		;
	while (*s2++ != '\0')
		;
	while (*s2-- == *set--)
		;
	if (!(res = malloc(sizeof(char) * (s2 - s1) + 1)))
		return (NULL);
	while (s1 <= s2)
		*res++ = *s1++;
	*res = '\0';
	return (res);
}