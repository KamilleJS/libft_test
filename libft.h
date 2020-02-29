/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <ikuklina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:04:32 by ikuklina          #+#    #+#             */
/*   Updated: 2020/02/28 18:54:40 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(char *str);
int					ft_isalpha(char *str);
int					ft_isascii(char *str);
int					ft_isdigit(char *str);
int					ft_isprint(char *str);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
char				*ft_strcat(char *dest, char *src);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *str);
int					ft_strlen(char *str);
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
char				*ft_strstr(char *str, char *to_find);
char				*ft_tolower(char *str);
char				*ft_toupper(char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *str, int c, size_t len);


#endif
