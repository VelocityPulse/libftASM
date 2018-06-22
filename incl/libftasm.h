/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:20:38 by cchameyr          #+#    #+#             */
/*   Updated: 2018/06/22 17:22:28 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_H
# define LIBFTASM_H

# include <string.h>

/*
** order : rdi rsi, rdx
*/

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_toupper(int c);
int		ft_tolower(int c);

void	ft_bzero(void *s, size_t n);
int		ft_puts(const char *s);

char	*ft_strcat(char *s1, const char *s2);

void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);

#endif
