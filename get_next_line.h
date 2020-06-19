/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 14:23:56 by yechoi            #+#    #+#             */
/*   Updated: 2020/04/15 11:33:58 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

/*
** get_next_line
*/
void	*ft_calloc(size_t nmemb, size_t size);
char	*stack_buff_join(char *stack, char *buff);
char	*update_line(char *stack, int ret);
char	*update_line(char *stack, int ret);
int		get_next_line(int fd, char **line);

/*
** get_next_line_utils
*/
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);

#endif
