/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:54:44 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/18 16:36:49 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 == *s1))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
int main() 
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hello";
    char str4[] = "he";
    char str5[] = "hellz";
    
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str4, ft_strcmp(str1, str4));
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str5, ft_strcmp(str1, str5));

    return 0;
}
*/
