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
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, size_t n);
char		*ft_strncat(char *dest, char *src, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t n);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);

#endif
