/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:38 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:34 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *copy;
    int length;
    int i;

    length = 0;
    while (src[length])
        length++;
    copy = malloc((length + 1) * sizeof(char));
    if (!copy)
        return (NULL);
    i = -1;
    while (++i < length)
        copy[i] = src[i];
    copy[i] = '\0';
    return (copy);
}

int length(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *list;

    list = malloc(sizeof(t_stock_str) * (ac + 1));
    if (!list)
        return (NULL);
    i = 0;
    while (i < ac)
    {
        list[i].size = length(av[i]);
        list[i].copy = ft_strdup(av[i]);
        list[i].str = av[i];
        if (list[i].copy == NULL)
        {
            free(list);
            return (NULL);
        }
        i++;
    }
    list[i].str = 0;
    return (list);
}

#include <stdio.h>
#include "../ex05/ft_show_tab.c"

int main(int argc, char **argv)
{
    t_stock_str *list;
    char **strs;
    int j = 0;
    while (++j < argc)
        strs[j - 1] = argv[j]; 
    int i = 0;
    
    list = ft_strs_to_tab(argc - 1, strs);
    ft_show_tab(list);
}
