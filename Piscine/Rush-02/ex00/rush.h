/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:37:32 by gikarcev          #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
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
	int		len_of_num;
}	t_number;

typedef struct s_data
{
	t_number	parsed_num;
	char		*dict;
	char		*num;
	int			fd;
	int			word_count;
	char		**result;
	int			dict_error;
	char		*line;
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
void	func_hundreds(char *str, t_data *data);
char	*get_substr(char *str, int start, int len);
int		ft_strlen(char *str);
void	lookup_print(t_data *data, char *value);
void	func_hundreds(char *str, t_data *data);
void	morningstar(char *str, t_data *data);
void	lookup_print(t_data *data, char *value);
char	*get_substr(char *str, int start, int length);
char	*power_of_10(unsigned int length);
void	correction(int *div, unsigned int *mod, unsigned int len);
char	*ft_strcat(char *dest, char *src);
int		check_sub_str(char *sub_str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strdup(char *src);
