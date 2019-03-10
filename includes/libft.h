#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
void		ft_putchar(char	c);
void		ft_putstr(char	*str);
char		*ft_strdup(char *str);
size_t		ft_strlen(char	*str);
void		ft_putnbr(int	nb);
char		*ft_strcat(char	*dest, char *src);
int			ft_strcmp(char *s1, char *s2);
int			ft_atoi(char *str);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);

#endif
