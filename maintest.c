/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:09:51 by cchameyr          #+#    #+#             */
/*   Updated: 2018/06/22 14:15:02 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/libftasm.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define BACKLINE(s) printf("\n------------------------------- %s\n", s);
#define BACKLINE_B(s) printf("\033[32m\n--------------------------BONUS %s\n\033[39m", s);

static void		ft_putstr(char *s)
{
	write(1, s, strlen(s));
}

static void		ft_putnbr(int n)
{
	long nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else {
		char fking_char = nbr + 48;
		write(1, &fking_char, 1);
	}
}

static int		unitest_putnstr(char *prefix, void const *p, size_t len)
{
	size_t    i;
	char *s;

	i = -1;
	s = (char *)p;
	ft_putstr("param: ");
	ft_putstr(prefix);
	ft_putstr(" |\tret: ");
	while (++i < len) {
		if (s[i] == 0) {
			ft_putstr("\033[31m0\033[39m");
		} else {
			write(1, &s[i], 1);
		}
	}
	printf("\n");
	return (i);
}

static int		unitest_putnnbr(char *prefix, int const *p, size_t len)
{
	size_t		i;

	i = -1;
	ft_putstr("param: ");
	ft_putstr(prefix);
	ft_putstr(" |\tret: ");
	while (++i < len) {
		ft_putnbr(p[i]);
		ft_putstr(" ");
	}
	printf("\n");
	return (i);
}

void			unitest_putmem(char *prefix, void const *p, int len) 
{
	int i = 0;
	unsigned char *t;

	t = (unsigned char *)p;
	i = 0;
	printf("%s ", prefix);
	while (i++ < len)
		printf(" %.2x", t[i]);
	printf("\n");
}

int main()
{

	BACKLINE("ft_isalpha");
	printf("param: 1 |\tret: %d\n", ft_isalpha(1));
	printf("param: '0' |\tret: %d\n", ft_isalpha('0'));
	printf("param: 7 |\tret: %d\n", ft_isalpha(7));
	printf("param: '[' |\tret: %d\n", ft_isalpha('['));
	printf("param: 4242 |\tret: %d\n", ft_isalpha(4242));
	printf("param: 'd' |\tret: %d\n", ft_isalpha('d'));
	printf("param: 'D' |\tret: %d\n", ft_isalpha('D'));
	printf("param: 'a' |\tret: %d\n", ft_isalpha('a'));
	printf("param: 'A' |\tret: %d\n", ft_isalpha('A'));
	printf("param: 'z' |\tret: %d\n", ft_isalpha('z'));
	printf("param: 'Z' |\tret: %d\n", ft_isalpha('Z'));

	BACKLINE("ft_isdigit");
	printf("param: 1 |\tret: %d\n", ft_isdigit(1));
	printf("param: '0' |\tret: %d\n", ft_isdigit('0'));
	printf("param: 7 |\tret: %d\n", ft_isdigit(7));
	printf("param: 'd' |\tret: %d\n", ft_isdigit('d'));
	printf("param: '$' |\tret: %d\n", ft_isdigit('$'));
	printf("param: 4242 |\tret: %d\n", ft_isdigit(4242));
	printf("param: '0' |\tret: %d\n", ft_isdigit('0'));
	printf("param: '2' |\tret: %d\n", ft_isdigit('5'));
	printf("param: '9' |\tret: %d\n", ft_isdigit('9'));
	printf("param: -10 |\tret: %d\n", ft_isdigit(-10));

	BACKLINE("ft_isascii");
	printf("param: -1 |\tret: %d\n", ft_isascii(-1));
	printf("param: 0 |\tret: %d\n", ft_isascii(0));
	printf("param: 64 |\tret: %d\n", ft_isascii(64));
	printf("param: 127 |\tret: %d\n", ft_isascii(127));
	printf("param: 128 |\tret: %d\n", ft_isascii(128));

	BACKLINE("ft_isalnum");
	printf("param: 7 |\tret: %d\n", ft_isalnum(7));
	printf("param: '[' |\tret: %d\n", ft_isalnum('['));
	printf("param: 4242 |\tret: %d\n", ft_isalnum(4242));
	printf("param: 'd' |\tret: %d\n", ft_isalnum('d'));
	printf("param: 'D' |\tret: %d\n", ft_isalnum('D'));
	printf("param: 'a' |\tret: %d\n", ft_isalnum('a'));
	printf("param: '0' |\tret: %d\n", ft_isalnum('0'));
	printf("param: '2' |\tret: %d\n", ft_isalnum('5'));
	printf("param: '9' |\tret: %d\n", ft_isalnum('9'));
	printf("param: -10 |\tret: %d\n", ft_isalnum(-10));

	// sp to ~
	BACKLINE("ft_isprint");
	printf("param: 31 |\tret: %d\n", ft_isprint(31));
	printf("param: 32 |\tret: %d\n", ft_isprint(32));
	printf("param: 'C' |\tret: %d\n", ft_isprint('C'));
	printf("param: ' ' |\tret: %d\n", ft_isprint(' '));
	printf("param: '~' |\tret: %d\n", ft_isprint('~'));
	printf("param: 127 |\tret: %d\n", ft_isprint(127));

	BACKLINE("ft_toupper");
	printf("param: 'c' |\t ret: '%c' || %d\n", ft_toupper('c'), ft_toupper('c'));
	printf("param: 'C' |\t ret: '%c' || %d\n", ft_toupper('C'), ft_toupper('C'));
	printf("param: 'a' |\t ret: '%c' || %d\n", ft_toupper('a'), ft_toupper('a'));
	printf("param: 'z' |\t ret: '%c' || %d\n", ft_toupper('z'), ft_toupper('z'));
	printf("param: 200 |\t ret: '%c' || %d\n", ft_toupper(200), ft_toupper(200));
	printf("param: -200 |\t ret: '%c' || %d\n", ft_toupper(-200), ft_toupper(-200));
	printf("param: '[' |\t ret: '%c' || %d\n", ft_toupper('['), ft_toupper('['));

	BACKLINE("ft_tolower");
	printf("param: 'c' |\t ret: '%c' || %d\n", ft_tolower('c'), ft_tolower('c'));
	printf("param: 'C' |\t ret: '%c' || %d\n", ft_tolower('C'), ft_tolower('C'));
	printf("param: 'a' |\t ret: '%c' || %d\n", ft_toupper('a'), ft_tolower('a'));
	printf("param: 'z' |\t ret: '%c' || %d\n", ft_tolower('z'), ft_tolower('z'));
	printf("param: 200 |\t ret: '%c' || %d\n", ft_tolower(200), ft_tolower(200));
	printf("param: -200 |\t ret: '%c' || %d\n", ft_tolower(-200), ft_tolower(-200));
	printf("param: '[' |\t ret: '%c' || %d\n", ft_tolower('['), ft_tolower('['));

	BACKLINE("ft_bzero");
	char *t1 = strdup("test");
	char *t2 = strdup("");
	int *t3 = malloc(sizeof(int) * 4);
	t3[0] = 100;
	t3[1] = 20;
	t3[2] = 300000000;
	t3[3] = -40000000;
	ft_bzero(t1, strlen(t1));
	ft_bzero(t2, 1);
	ft_bzero(t3, 16);

	unitest_putnstr("t1", t1, 5);
	unitest_putnstr("t2", t2, 1);
	unitest_putnnbr("t3", t3, 4);
	free(t3);

	BACKLINE("ft_puts");
	ft_puts(0);
	ft_puts("tes");
	ft_puts("jkladjgfksdjg;jsgsd");

	BACKLINE("ft_strlen");
	printf("param: \"ABCDE\" |\t ret: '%zd'\n", ft_strlen("ABCDE"));
	printf("param: \"&*(\" |\t ret: '%zd' | real ret : '%zd'\n", ft_strlen("&*("), strlen("&*("));
	printf("param: \"\" |\t ret: '%zd'\n", ft_strlen(""));
	printf("param: \"A\" |\t ret: '%zd'\n", ft_strlen("A"));

	BACKLINE("ft_strcat");
	char *s1 = strdup("aaaaaaaaaa");
	char *s1temp = strdup(s1);
	char *s2 = strdup("test");
	char *s2temp = strdup(s2);
	s1[4] = 0;
	s1temp[4] = 0;

	printf("param : s1:[%s] s2:[%s]\n", s1, s2);
	printf("mine  : ret:[%s]\n", ft_strcat(s1, s2));
	printf("real  : ret:[%s]\n", strcat(s1temp, s2temp));
	free(s1);
	free(s1temp);
	free(s2);
	free(s2temp);

	BACKLINE("ft_memset");
	char *b1 = strdup("xxxxxxxxxxxxx");
	char *b1temp = strdup(b1);
	void *b2 = malloc(20);
	void *b2temp = malloc(20);


	printf("param : b1 :[%s] | c:['G'] | len:[strlen(b1)]\n", b1);
	printf("real  : ret:[%s]\n", (char *)memset(b1temp, 'G', strlen(b1temp)));
	printf("mine  : ret:[%s]\n", (char *)memset(b1, 'G', strlen(b1)));

	b2 = memset(b2, 43, 20);
	b2temp = memset(b2temp, 43, 20);
	unitest_putmem("param : (+2)\t", b2temp, 19);
	memset(b2temp + 4, 0, 13);
	unitest_putmem("real  :\t\t", b2temp, 19);
	ft_memset(b2 + 4, 0, 13);
//	unitest_putmem("mine  :\t\t", b2, 19);


	return 0;
}
