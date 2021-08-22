/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                      +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:02:48 by hbendani            #+#    #+#           */
/*   Updated: 2021/08/19 09:03:05 by hbendani           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */
/*#include<unistd.h>
#include<stdio.h>*/
char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[10] = "friend";
	char dest[10] = "hello ";
	printf ("%s",ft_strncat(dest,src,1));
}*/
