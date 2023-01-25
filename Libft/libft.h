/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:42:16 by ohortal-          #+#    #+#             */
/*   Updated: 2023/01/19 10:58:12 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int ft_toupper(int c);
int	ft_strlen(const char *s);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *str, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif
