/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                      +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:57:55 by hbendani            #+#    #+#           */
/*   Updated: 2021/08/19 09:00:43 by hbendani           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */
/*#include<unistd.h>
#include<stdio.h>*/
char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char src[]= " nro";
	char dest[]= "hello";
	printf("%s",ft_strcat(dest,src));
}*/
