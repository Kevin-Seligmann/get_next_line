/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 03:34:32 by kseligma          #+#    #+#             */
/*   Updated: 2024/02/15 16:34:03 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 4500
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
char	*manage_left(char **left, char op);
char	ft_strn(char *s, char c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_cpy(char *dst, char *src, size_t n);

#endif
