/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 21:34:12 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/28 18:23:35 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen((char *)s1);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, len);
	*(ptr + len) = '\0';
	return (ptr);
}
