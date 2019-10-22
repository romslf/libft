/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: romainlaforgue <romainlaforgue@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 17:17:23 by romainlafor  #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 16:28:25 by rolaforg    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    size_t  len;
    char *str;

	if (!s || !f)
		return (NULL);
    len = ft_strlen((char *)s);
    if (!(str = malloc(sizeof(char) * len + 1)))
        return (NULL);
    i = 0;    
    while (i < len)
    {
        str[i] = (*f)(i, (char)s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}