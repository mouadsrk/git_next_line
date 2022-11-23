#include "get_next_line.h"

char *read_line(int fd, char *save)
{
    int i;
    char *next_read;

	i = 1;
	next_read = NULL;
    while(!ft_strchr(next_read) && i > 0)
	{
		next_read = malloc(BUFFER_SIZE + 1);
		if(!next_read)
			return(NULL);
		i = read(fd,next_read,BUFFER_SIZE);
		if(i == 0)
			break;	
		if(i == -1)
			return(free(next_read),next_read = NULL,NULL);
		next_read[i] = '\0';
		save = ft_strjoin(save, next_read);
		free(next_read);
		next_read = NULL;	
    }
	free(next_read);
	next_read = NULL;
	return(save);
}

char *ft_get_line(char *save)
{
	char *str;
	int i;
	int j;

	i = 0;
	j = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if(save[i] == '\n')
		i++;
	str = malloc (i + 1);
	if(!str)
		return(free(save),save = NULL, NULL);
	str[i] = '\0';
	while(save[j] && save[j] != '\n')
	{
		str[j] = save[j];
		j++;
	}
	str[j] = '\n';
	return (str);
}

char *adjust_next_line(char *save)
{
	char *str;
	int	i;
	int j;
	i = 0;

	while(save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		i++;
	if((size_t) i == ft_strlen(save))
		return(free(save),save = NULL,NULL);
	j = ft_strlen(save + i);
	 str = malloc(j + 1);
	if(!str )
		return(free(save), save = NULL,NULL);
	 j = 0;
	 while(save[i])
	 	str[j++] = save[i++];
	 str[j] = '\0';
	 free(save);
	 save = NULL;
	 return(str);
}

char	*get_next_line(int fd)
{
	static char *save;
	char		*line;

	if(!ft_strchr(save))
		save = read_line(fd, save);
	if (!save)
		return(NULL);
   	line = ft_get_line(save);
	if (!line)
		return(NULL);
    save = adjust_next_line(save);

	return(line);
}
// int main ()
// {
// 	int fd = open("text.txt" ,O_RDONLY);
// 	printf("%s",get_next_line(fd));
// 	printf("%s",get_next_line(fd));
// 	printf("%s",get_next_line(fd));
// 	return (0);
// }