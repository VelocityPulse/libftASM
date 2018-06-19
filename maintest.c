/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:09:51 by cchameyr          #+#    #+#             */
/*   Updated: 2018/06/19 11:47:19 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/libftasm.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define BACKLINE(s) printf("\n------------------------------- %s\n", s);

static int		unitest_putnstr(char *prefix, void const *p, size_t len)
{
	size_t    i;
	char *s;

	i = -1;
	s = (char *)p;
	printf("param: %s |\tret: ", prefix);
	while (++i < len) {
		if (s[i] == 0) {
			write(1, "0", 1);
		} else {
			write(1, &s[i], 1);
		}
	}
	printf("\n");
	return (i);
}

int main()
{

	BACKLINE("ft_isdigit");
	printf("param: 1 |\tret: %d\n", ft_isdigit(1));
	printf("param: 7 |\tret: %d\n", ft_isdigit(7));
	printf("param: 'd' |\tret: %d\n", ft_isdigit('d'));
	printf("param: '$' |\tret: %d\n", ft_isdigit('$'));
	printf("param: 4242 |\tret: %d\n", ft_isdigit(4242));
	printf("param: '0' |\tret: %d\n", ft_isdigit('0'));
	printf("param: '2' |\tret: %d\n", ft_isdigit('5'));
	printf("param: '9' |\tret: %d\n", ft_isdigit('9'));
	printf("param: -10 |\tret: %d\n", ft_isdigit(-10));

	BACKLINE("ft_isalpha");
	printf("param: 1 |\tret: %d\n", ft_isalpha(1));
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
	char *t1 = NULL;
	char *t2 = strdup("test");
	char *t3 = strdup("");
	int *t4 = malloc(sizeof(int) * 4);
	t4[0] = 100;
	t4[1] = 20;
	t4[2] = 300000000;
	t4[3] = -40000000;
	ft_bzero(t1, 0);
//	ft_bzero(t2, strlen(t2));
//	ft_bzero(t3, 1);
//	ft_bzero(t4, 4);


	unitest_putnstr("t1", t1, 2);
//	unitest_putnstr("t2", t2, 5);
//	unitest_putnstr("t3", t3, 1);
//	unitest_putnstr("t4", t4, 5);







	return 0;
}
