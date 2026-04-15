/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:33:13 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/14 09:33:15 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("strcmp(%s, %s) = %d", argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
	return (0);
}
*/
