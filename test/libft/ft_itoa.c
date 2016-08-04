/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 16:54:42 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/14 16:55:07 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intsize(int n)
{
    int i;
    
    i = 1;
    if (n < 0)
    {
        n *= -1;
        i++;
    }
    while ((n /= 10) > 0)
        i++;
    return (i);
}

char		*ft_itoa(int n)
{
    char	*re;
    int		size;
    
    size = ft_intsize(n);
    re = ft_strnew(size);
    if (re == NULL)
        return (NULL);
    if (n < 0)
    {
        n *= -1;
        re[0] = '-';
    }
    size--;
    while ((n / 10) > 0)
    {
        re[size] = (n % 10) + '0';
        size--;
        n /= 10;
    }
    re[size] = (n % 10) + '0';
    return (re);
}
