/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:39:31 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:52 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long long		i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = ft_strlen(s);
	if (ch == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int check_the_same(char *res_std, char *res)
{
	int out = 0;
	printf("\nexpected pointer: %p, get pointer: %p\n", res_std, res);
	printf("expected data: %s, get data: %s\n", res_std, res);
	if (res == NULL || res_std == NULL)
	{
		if (res == NULL && res_std == NULL)
			out = 1;
		else
			out = 0;
	}
	else
	{
		out = (strcmp(res_std, res) == 0 && *res_std == *res) ? 1 : 0;
	}
	return (out);
}
int single_test_strchr(int test_number, char *str, int ch)
{
	printf("\nTest %d\nft_strchr(%p: \"%s\", char: '%c')", \
	test_number, str, str, ch);
	char *res = ft_strrchr(str, ch);
	char *res_std = strrchr(str, ch);
	int compare = check_the_same(res_std, res);
	compare == 1 ? printf("OK!\n") : printf("KO!\n");
	return (compare);
}

int	main()
{
	int res = 1;
	res = single_test_strchr(1,"teste", 't') && res;
	res = single_test_strchr(2,"teste", 'e') && res;
	res = single_test_strchr(3, "teste", '\0') && res;
	res = single_test_strchr(4, "teste", 'a') && res;
	res = single_test_strchr(5, "teste", 'e' + 256) && res;
	res = single_test_strchr(6, "teste", 1024) && res;

	if (res == 1)
		printf("Test Succesful!");
	else
		printf("Test Faled");
	return (0);
}
*/
