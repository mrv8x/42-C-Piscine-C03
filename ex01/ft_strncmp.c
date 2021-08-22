/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                      +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:26:37 by hbedani            #+#    #+#            */
/*   Updated: 2021/08/19 08:54:27 by hbendani           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */
/*#include<unistd.h>
#include<stdio.h>*/
int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main()
{
	char	s1[]= "hello";
	char	s2[]= "hillo";
	printf("%d",ft_strncmp(s1,s2,5));
			}*/
