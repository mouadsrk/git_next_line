/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:07:08 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/24 23:08:08 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include<stdio.h>
# include <unistd.h>
# include <fcntl.h> 
# include<stdlib.h>

int		ft_strchr(char *str);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *save, char *buffer);
char	*get_next_line(int fd);
char	*adjust_next_line(char *save);
char	*read_line(int fd, char *save);
char	*ft_strdup(char *s1);

#endif