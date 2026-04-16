/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:41:55 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/16 16:04:23 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 10

# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c, int output);
void	ft_putstr(char *str, int output);
int		ft_display_file(char *filename);

#endif
