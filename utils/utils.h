/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/28 15:53:54 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/28 18:24:59 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	*ft_strjoin(char const *s1, char const *s2);

void	*ft_memmove(void *dst, const void *src, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len);

void	*ft_calloc(size_t count, size_t size);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1);

#endif