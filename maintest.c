/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:09:51 by cchameyr          #+#    #+#             */
/*   Updated: 2018/06/14 11:45:53 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/libftasm.h"
#include <stdio.h>

#define BACKLINE(s) printf("\n-------------------------------%s\n", s);


int main()
{

	BACKLINE("ft_isdigit");
	printf("param: 1 | ret: %d\n", ft_isdigit(1));
	printf("param: 7 | ret: %d\n", ft_isdigit(7));
	printf("param: d | ret: %d\n", ft_isdigit('d'));
	printf("param: $ | ret: %d\n", ft_isdigit('$'));
	printf("param: 4242 | ret: %d\n", ft_isdigit(4242));

	return 0;
}
