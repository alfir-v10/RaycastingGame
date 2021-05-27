

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif
# include <stdlib.h>
# include <unistd.h>
# include <../libft/libft.h>

int		get_next_line(int fd, char **line);
char	*ft_strzchr(char *s, int c, int i);
#endif
