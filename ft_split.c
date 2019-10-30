/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rolaforg <rolaforg@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/29 18:45:13 by rolaforg     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 15:04:40 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	word_len(char const *w, char c)
{
	size_t	i;

	i = 0;
	while (w[i] != c && w[i] != '\0')
		i++;
	return (i);
}

size_t	count_words(char const *s, char c)
{
	size_t	cnt;
	size_t	cnted;

	cnt = 0;
	cnted = 0;
	while (*s != '\0')
	{
		if (cnted == 0 && *s != c && *s != '\0')
		{
			cnt++;
			cnted = 1;
		}
		else if (cnted == 1 && *s == c)
			cnted = 0;
		s++;
	}
	return (cnt);
}

char	*cpy_word(char const *s, char c)
{
	size_t	i;
	char	*word;

	if (!(word = malloc(sizeof(char) * (word_len(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s != c && *s != '\0')
		word[i++] = *s++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;

	i = 0;
	if (!(s) || !(res = malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			res[i++] = cpy_word(s, c);
			s += word_len(s, c);
		}
	}
	res[i] = NULL;
	return (res);
}