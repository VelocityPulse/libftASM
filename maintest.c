/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:09:51 by cchameyr          #+#    #+#             */
/*   Updated: 2018/06/15 12:32:14 by cchameyr         ###   ########.fr       */
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









	return 0;
}
