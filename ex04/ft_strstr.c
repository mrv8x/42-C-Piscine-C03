/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 08:32:52 by hbendani            #+#    #+#             */
/*   Updated: 2021/08/19 09:17:21 by hbendani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
#include<unistd.h>
#include<string.h>*/
unsigned	int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char	*str1, char *str2, unsigned	int	n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0'
		&& str2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

char	*ft_strstr(char *str, char	*to_find)
{
	if (ft_strlen(to_find) == 0)
		return (str);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
			return (str);
		str++;
	}
	return (0);
}
/*int main()
{
char str[] = "hello fucking world wassup";
char to_find[] = "uc";
printf("%s",ft_strstr(str,to_find));
}*/	
