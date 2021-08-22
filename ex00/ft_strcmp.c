/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:13:18 by hbendani            #+#    #+#             */
/*   Updated: 2021/08/19 08:59:44 by hbendani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<unistd.h>
#include<stdio.h>*/
int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char s1[] = "hello";
	char s2[] = "hello";
	printf("%d",ft_strcmp(s1,s2));
}*/
