/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:39 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
//Функция должна соединять строки из списка strs и вставлять между разделитель
//Размер определен заранее
//Если размер 0 то вернуть пустую строку которую можно очистить

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

int multi_strlen(char **strs, int size)
{
    int len;
    int i;

    len = 0;
    i = -1;
    while (++i < size)
        len += ft_strlen(strs[i]);
    return len;
}

char *joinification(int size, char **strs, char *sep, char *output)
{
    char *temp;
    int i;
    int j;
    int k;

    temp = output;
    i = -1;
    while (++i < size)
    {
        j = -1;
        while (strs[i][++j])
            *temp++ = strs[i][j];
        if(i != size - 1)
        {
            k = -1;
            while (sep[++k])
                *temp++ = sep[k];   
        }
    }
    *temp = '\0';
    return (temp);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *output;
    int total_l;

    if (size == 0)
    {
        output = malloc(1);
        if (output)
            output[0] = '\0';
        return output;
    }
    total_l = multi_strlen(strs, size) + (size - 1) * ft_strlen(sep);
    output = malloc(total_l + 1);
    if (!output)
        return (NULL);
    joinification(size, strs, sep, output);
    return (output);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc <= 1)
        return (0);
    char separator[6] = "+++++";
    char *out;

    out = ft_strjoin(argc-1, &argv[1], separator);

    if (out)
    {
        printf("Output: %s\nPointer: %p", out, out);
        free(out);
    }
    return (0);
}
*/
