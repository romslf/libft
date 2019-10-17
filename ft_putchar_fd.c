/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putchar_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: romainlaforgue <romainlaforgue@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 15:40:49 by romainlafor  #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 15:51:24 by romainlafor ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    unsigned char chr = c;
    write(fd, &chr, 1);
}