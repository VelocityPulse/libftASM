/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:09:51 by cchameyr          #+#    #+#             */
/*   Updated: 2018/07/11 15:24:07 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/libftasm.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv) 
{
	if (argc == 2)
	{
		printf("UNITEST: try open file\n");
		int fd;
		if ((fd = open(argv[1], O_RDONLY, 0)) < 0) 
		{
			printf("UNITEST: error fd\n");
			return (1);
		}
		printf("UNITEST: fd = %d\n", fd);
		ft_cat(fd);
	}
	else
	{
		printf("UNITEST: standard entry\n");
		ft_cat(0);
	}
}

