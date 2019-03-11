#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
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
size_t		ft_strlcat(char *dst, char *src, size_t n);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_memalloc(size_t size);
void		ft_memdel();
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char*));
void		ft_striteri(char *s,void (*f)(unsigned int, char *));
char		*ft_strmap(char	*s, char (*f)(char));
char		*ft_strmapi(char *s,char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1,char const *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(const char *s1, char sep);
void		ft_print_words_tables(char **s);

#endif
