/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:39 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int count_substr(char *str, char *charset)
{
    int words;
    char *sub;

    words = 0;
    while (*str)
    {
        sub = charset;
        while (*str != *sub && *sub)
            str++;
        while (*str == *sub)
            sub++;
        if (!*sub)
            words++;
        str++;
    }
    return (words);
}

int len_counter(char *str, char *charset)
{
    int len;

    len = 0;
    while (str[len] != charset[0] && *str)
        len++;
    if (len != 0)
        len++;
    return (len);
}

char **ft_split(char *str, char *charset)
{
    int words;
    char *strinsert;
    //
    int inwordc;
    //
    char *substr_counter;
    int word_len;
    int k; // For words

    k = 0;
    words = count_substr(str, charset);
    printf("Words: %d\n", words);
    char **strings = malloc(sizeof(char *) * (words + 1));
    while (k <= words)
    {
        substr_counter = charset;
        word_len = len_counter(str, charset);
        strings[k] = malloc(sizeof(char) * (word_len + 1));
        if (!strings[k])
            strings[k] = NULL;
        
        inwordc = 0;
        while (*str != *substr_counter && inwordc < word_len)
        {
            strings[k][inwordc] = *str;
            str++;
            inwordc++;
        }
        strings[k][inwordc] = '\0';
        while (*str == *substr_counter)
        {
            str++;
            substr_counter++;
        }
        printf("%s  k: %d\n", strings[k], k);
        k++;
    }
    strings[k] = NULL;
    return (strings);
}



int main(void)
{
    char **result = ft_split("hello world 42 school", " ");
    int i = 0;
    //printf("%d\n", count_substr("hello world 42, gold on the cillin", " "));
    while (result[i++] != NULL)
       printf("%s\n", result[--i]);
    free(result);
    return (0);
}
