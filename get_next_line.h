
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#include<stdio.h>
#include <unistd.h>
#include <fcntl.h> 
#include<stdlib.h>

typedef struct val
{
    int i ;
    char *str;
}t_var ;


int ft_strchr(char *str);
size_t ft_strlen(char *s);
char	*ft_strjoin(char *save, char *buffer);
char *get_next_line(int fd);
char *adjust_next_line(char *save);
char *read_line(int fd,char *save);
char	*ft_strdup(char *s1);

#endif
