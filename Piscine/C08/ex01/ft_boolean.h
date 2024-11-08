/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:56:27 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:34 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include <unistd.h>
typedef int t_bool;
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 == 0)
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#endif
