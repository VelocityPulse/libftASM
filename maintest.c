/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:09:51 by cchameyr          #+#    #+#             */
/*   Updated: 2018/06/15 16:09:19 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/libftasm.h"
#include <stdio.h>

#define BACKLINE(s) printf("\n------------------------------- %s\n", s);


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

	BACKLINE("ft_isalnum");
	printf("param: 1 |\tret: %d\n", ft_isalpha(1));
	printf("param: 7 |\tret: %d\n", ft_isalpha(7));
	printf("param: '[' |\tret: %d\n", ft_isalpha('['));
	printf("param: 4242 |\tret: %d\n", ft_isalpha(4242));
	printf("param: 'd' |\tret: %d\n", ft_isalpha('d'));
	printf("param: 'a' |\tret: %d\n", ft_isalpha('a'));
	printf("param: 'z' |\tret: %d\n", ft_isalpha('z'));
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

















	return 0;
}
