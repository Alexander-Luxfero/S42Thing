/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:37:32 by gikarcev          #+#    #+#             */
/*   Updated: 2024/10/19 18:53:55 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct s_number
{
	char	*num;
	char	*p_num;
}	t_number;

typedef struct s_data
{
	t_number	parsed_num;
	char		*dict;
	char		*num;
	int			fd;
}	t_data;

char	*read_dict(int fd);
void	ft_putstr(char *str);
char	*read_dict(int fd);
void	parser(char *str, t_number *parsed);
char	*read_dict(int fd);
char	*read_dict(int fd);
void	parser(char *str, t_number *parsed);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
unsigned int    length(char *str);

void	func_hundreds(char *num); //420
char	*get_substr(char *str, int start, unsigned int length); //len is always 3 
unsigned int    length(char *str);