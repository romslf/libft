/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 12:06:40 by romainlafor  #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 15:54:57 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char		*ft_trim(char const *s1, char const *set)
{
	char const	*s;
	char		*res;
	size_t		i;

	if (!(s1))
		return (NULL);
	s = s1;
	i = 0;
	while (*s != '\0')
		s++;
	while (is_set(*s, set) || *s == '\0')
		s--;
	while (is_set(*s1, set))
		s1++;
	if (s < s1)
		return (ft_calloc(1, sizeof(char)));
	if (!(res = malloc(sizeof(char) * ((s - s1) + 2))))
		return (NULL);
	while (s1 <= s)
		res[i++] = *s1++;
	res[i] = '\0';
	return (res);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	if (s1 && set)
		return (ft_trim(s1, set));
	else
		return (NULL);
}
